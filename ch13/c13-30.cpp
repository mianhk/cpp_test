#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//�����⣬���г��� 
class HasPtr{
	friend void swap(HasPtr&,HasPtr&);
	friend void print_s(HasPtr &h);
	public:
		HasPtr(const string &s):ps(new string(s)),i(0),use(new size_t(1)){
		}
		explicit HasPtr(int t):ps(new string("")),i(t),use(new size_t(1)){
	}
		HasPtr(const HasPtr &p):
			ps(new string(*p.ps)),i(p.i),use(p.use){++use;
			}         //�������캯�� 
		HasPtr& operator=(const HasPtr&); //������ֵ�����
		HasPtr& operator=(const string&);//����һ���µ�string
		string& operator*(); //������
		~HasPtr();//�������� 
		//�����<����� 
	 	bool operator<(const HasPtr &rhs);

	private:
		string *ps;
		int i;
		size_t *use;
};
//void print_s(HasPtr &h){
//	cout<<*ps<<" ";
//	}
		 
void swap(HasPtr &lhs,HasPtr &rhs){
	using std::swap;
	cout<<"swap����������"<<endl;
	swap(lhs.ps,rhs.ps);
	swap(lhs.i,rhs.i);
}
HasPtr::~HasPtr(){
	if(--*use==0){
		delete ps;    //�ͷ�string���ڴ� 
		delete use;
	}
}

HasPtr& HasPtr::operator=(const string &h){
	*ps=h;
	return *this;
}

inline
HasPtr& HasPtr::operator=(const HasPtr &rhs){
	++*rhs.use;
	if(--*use==0){
		delete ps;
		delete use;
	}
	ps=rhs.ps;
	i=rhs.i;
	use=rhs.use;
	return *this;
}

string& HasPtr::operator*(){
	return *ps;
} 

bool HasPtr::operator<(const HasPtr &rhs){
	return (this->i)<rhs.i;
}
int main(){
	HasPtr h("hi,mon");
//	HasPtr h1(h);
	HasPtr h2=h;
	h="hi,dad";
	swap(h,h2);
//	h1="hi,dad";
//	h2="hi,son";
	cout<<"h:"<<*h<<endl;
//	cout<<"h1: "<<*h1<<endl;
	cout<<"h2: "<<*h2<<endl;
	
	cout<<"//////////////"<<endl;
	vector<HasPtr> vh;
	
	for(int i=0;i!=10;++i){
		cout<<"sdasd"<<endl;
		HasPtr h0(i);		
//h0=i;
//		print_s(h0);
		cout<<*h0<<" ";
		vh.push_back(h0);
	}
	cout<<endl;
//	for(auto vv:vh){
//		cout<<*vv<<" ";
//	}
//	cout<<endl;
//	sort(vh.begin(),vh.end());
//		for(auto vv:vh){
//		cout<<*vv<<" ";
//	}
//	cout<<endl;
	return 0;
}
