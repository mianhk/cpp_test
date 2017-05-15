#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int c[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10]={10,9,8,7,6,5,4,3,2,1};
	//判断数组是否相等
	int *p1=a,*p2=b;
	int i=0;
	while(p1!=end(a)&&p2!=end(b)){
		if(*p1++!=*p2++){
			cout<<"数组不相等"<<endl;
			break;
		}
		i++;
	} 
	vector<int> s1{1,2,3};
	vector<int> s2{1,2,3};
	auto p3=s1.begin(),p4=s2.begin();
	while(p3!=s1.end()||p4!=s2.end()){
		if(*p3++!=*p4++){
			cout<<"vector 不相等"<<endl;
			break;
		}
	}
	return 0;
}

