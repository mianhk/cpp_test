#include <iostream>
#include <string>
//#include <stl_iterator.h>
using namespace std;

//

//���Ժ���������һ����Ҫ�βΣ�ֻ��Ҫ���ͣ� 
void print(int n,string){
	cout<<n<<endl;
}


//���Դ��룺��ĳһֵ��Ϊ8�ı���
size_t round_up_8(size_t bytes){     
	return (((bytes)+8-1)&~(8-1));
} 

//��Ҫע������飬֪���Ͽ�����һ���𰸣��е㶺��
/*
int main(){
	int a[5];
	a[5]=3;
	a[6]=7;
	cout<<a[5]<<endl;
	cout<<a[6]<<endl;
}
*/ 

//�ڲ�ʹ�õĺ�����ǰ���__���֣�������Python
void __print (int n){
	cout<<n<<endl;
}

int main(){
//	string s("qw");
//	print(3,s);
	int m;
	m+=1;
	cout<<m<<endl;
	size_t n=17;
	__print(n);
	cout<<round_up_8(n)<<endl;
	return 0;
}
