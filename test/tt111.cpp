#include <iostream>
#include <string>
//#include <stl_iterator.h>
using namespace std;

//

//测试函数参数不一定需要形参，只需要类型？ 
void print(int n,string){
	cout<<n<<endl;
}


//测试代码：将某一值调为8的倍数
size_t round_up_8(size_t bytes){     
	return (((bytes)+8-1)&~(8-1));
} 

//需要注意的数组，知乎上看到的一个答案，有点逗比
/*
int main(){
	int a[5];
	a[5]=3;
	a[6]=7;
	cout<<a[5]<<endl;
	cout<<a[6]<<endl;
}
*/ 

//内部使用的函数，前面加__区分，类似于Python
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
