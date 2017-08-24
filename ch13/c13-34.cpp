#include <iostream>
#include <string>
#include <set>
using namespace std;
class Message{
	friend class Folder;
	friend void swap(Message &lhs,Message &rhs);
	public:
		//folders被隐式初始化为空集合
		explicit Message(const string &str=""):content(str){
		}
		Message(const Message&);  //拷贝构造函数
		Message & operator=(const Message&); //拷贝赋值运算符
		~Message();
		
		//从给定Folder集合中添加删除本message
		void save(Folder&);
		void remove(Folder&); 
		void addFldr(Folder&);
		
	private:
		string contents;    //实际的文本消息 
		set<Folder*> folders;    //包含本Message的Folder
		void add_to_Folders(const Message&);
		void remove_from_Folders(); 
};

class Folder{
	friend class Message;
	public:
		explicit Folder(const string &str=""):folder_name(str){
		}
		Folder(const Folder &f);
		Folder& operator=(const Folder&);
		~Folder();
		void addMsg(Message *m){
			msgs.insert(m);
		}
		void remMeg(Message*){
			msgs.erase(m);
		}
		
	private:
//		string folder_name;
		set<Message*> msgs;
		void add_to_Messages(const Folder&);
		void remove_from_Messages();
};

void Message::save(Folder &f){
	folders.insert(&f);  //将给定的Folder添加到Message的Folder列表中
	f.addMsg(this); 
}

void Message::remove(Folder &f){
	folders.erase(&f);
	f.remMeg(this);
}

void Message::add_to_Folders(const Message &m){
	for(auto f:m.folders){
		f->addMsg(this);
	}
}

Message::Message(const Message &m):contents(m.contents),folders(m.folders){
	add_to_folders(m);  //将本消息添加到指向m的Folder中 
}

void Message::remove_from_Folders(){
	for(auto f:folders){
		f->remMsg(this);
	}
}
Message & Message::operator=(const Message &rhs){
	//先删除指针再插入他们来处理自赋值
	remove_from_Folders();
	contents=rhs.contents;
	folders=rhs.folders;
	add_to_Folders(rhs);
	return *this;
}
void Message::addFldr(Folder &f){
	folders.insert(f);
}
void swap(Message &lhs,Message &rhs){
	using std::swap;
	for(auto f:lhs.folders)
		f->remMeg(&lhs);
	for(auto f:rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders,rhs.folders);
	swap(lhs.contemts,rhs.folders);
	for(auto f:lhs.folders)
		f->addMsg(&lhs);
	for(auto f:rhs.folders)
		f->addMsg(&rhs);
}

void Folder::add_to_Messages(const Folder &f){
	for(auto msg:f.msgs)
		msg->addFldr(this);
}
void Folder::remove_from_Messages(){
	while(!msgs.empty())   //将这个Folder从他的所有的Message中删除 
		(*msgs.begin())->remove(*this);
}
Folder::Folder(const Folder &f):msgs(f.msgs){
	add_to_Messages(f);
}
Folder::~Folder(){
	remove_from_Messages();
}
Folder& Folder::operator=(const Folder &f){
	remove_from_Messages();
	msgs=f.msgs;
	add_to_Messages(f);
	return *this;
}
int main(){
	
} 
