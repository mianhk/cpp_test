#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>
using namespace std;

class StrBlob{
	public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob();
		StrBlob(std::initializer_list<std::string> li);
		size_type size() const{return data->size();}
		bool empty() const {return data->empty();} 
		void push_back(const std::string &t){data->push_back(t);
		}
		void pop_back();
		std::string& front();
		std::string& back();
		const std::string& front() const;
		const std::string& back() const ;
	private:
		std::shared_ptr<std::vector<std::string>> data;
		void check(size_type i,const std::string &msg) const;
};
//���캯��
StrBlob::StrBlob():data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}

void StrBlob::check(size_type i,const string &msg) const{
	if(i>=data->size())
	throw out_of_range(msg);
}

string& StrBlob::front(){
	check(0,"front on empty StrBlob");
	return data->front();
}

string& StrBlob::back(){
	check(0,"back on empty StrBlob");
	return data->back();
}

const string& StrBlob::front() const{
	check(0,"front on empty StrBlob");
	return data->front();
}

const string& StrBlob::back() const{
	check(0,"back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back(){
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}


//���Դ��� 
int main(){
	StrBlob b1;
	{
		StrBlob b2={"a","an","the"};
		b1=b2;
		b2.push_back("about");
		cout<<"b2.size()"<<b2.size()<<endl;
	}
	cout<<"b1.size()"<<b1.size()<<endl;
	cout<<"b1.front()"<<b1.front()<<endl;
	
	const StrBlob b3=b1;
	cout<<"b3.front()"<<b3.front()<<" "<<"b3.back()"<<b3.back()<<endl;
	return 0;
}

