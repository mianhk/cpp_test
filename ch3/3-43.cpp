#include <iostream>
using namespace std;
using int_array=int[4];
typedef int int_array[4];
int main()
{
	int ia[3][4];
	cout<<"����һ������ָ��"<<endl; 
	for(int_array *p=ia;p!=end(ia);++p){
		for(int *q=*p;q!=*p+4;++q){
			cout<<*q<<' ';
		}
		cout<<endl;
	}
	//������
	cout<<"�����������÷�Χforѭ��"<<endl;
	for(auto *a:ia){
		for(;a!=4;++a){
			cout<<*a;
		}
		cout<<endl;
	}
	//������
	cout<<"���������±������"<<endl;
	for(int i=0;i!=3;++i){
		for(int j=0;j!=4;++j){
			cout<<ia[i][j];
		}
		cout<<endl;
	} 
	return 0;
}

