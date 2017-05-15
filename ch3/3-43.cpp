#include <iostream>
using namespace std;
using int_array=int[4];
typedef int int_array[4];
int main()
{
	int ia[3][4];
	cout<<"方法一：采用指针"<<endl; 
	for(int_array *p=ia;p!=end(ia);++p){
		for(int *q=*p;q!=*p+4;++q){
			cout<<*q<<' ';
		}
		cout<<endl;
	}
	//方法二
	cout<<"方法二：采用范围for循环"<<endl;
	for(auto *a:ia){
		for(;a!=4;++a){
			cout<<*a;
		}
		cout<<endl;
	}
	//方法三
	cout<<"方法三：下标运算符"<<endl;
	for(int i=0;i!=3;++i){
		for(int j=0;j!=4;++j){
			cout<<ia[i][j];
		}
		cout<<endl;
	} 
	return 0;
}

