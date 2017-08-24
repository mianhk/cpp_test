#include <iostream>
#include <string>
#include <set>
using namespace std;
class Message{
	friend class Folder;
	friend void swap(Message &lhs,Message &rhs);
	public:
		//folders����ʽ��ʼ��Ϊ�ռ���
		explicit Message(const string &str=""):content(str){
		}
		Message(const Message&);  //�������캯��
		Message & operator=(const Message&); //������ֵ�����
		~Message();
		
		//�Ӹ���Folder���������ɾ����message
		void save(Folder&);
		void remove(Folder&); 
		void addFldr(Folder&);
		
	private:
		string contents;    //ʵ�ʵ��ı���Ϣ 
		set<Folder*> folders;    //������Message��Folder
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
	folders.insert(&f);  //��������Folder��ӵ�Message��Folder�б���
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
	add_to_folders(m);  //������Ϣ��ӵ�ָ��m��Folder�� 
}

void Message::remove_from_Folders(){
	for(auto f:folders){
		f->remMsg(this);
	}
}
Message & Message::operator=(const Message &rhs){
	//��ɾ��ָ���ٲ��������������Ը�ֵ
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
	while(!msgs.empty())   //�����Folder���������е�Message��ɾ�� 
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
