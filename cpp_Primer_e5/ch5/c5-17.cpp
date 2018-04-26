#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a{0,1,1,2};
	vector<int> b{0,1,1,2,4,5,6,7};
	auto it_a=a.begin();
	auto it_b=b.begin();
	bool flag=true;
	for(;it_a!=a.end()&&it_b!=b.end();++it_a,++it_b){
		if(*it_a!=*it_b){
			cout<<*it_a<<*it_b<<endl;
			cout<<"a与b不是前缀"<<endl;
			flag=false;
			break;
		}
	}
	if(flag==true){
		cout<<"a与b是前缀"<<endl;
	}
	return 0;
}

