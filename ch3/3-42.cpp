#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	const int sz=10;
	vector<int > v_int;
	srand((unsigned)time(NULL));
	cout<<"vector中的内容是："<<endl;
	for(int i=0;i!=sz;++i){
		v_int.push_back(rand()%100);//生成 一个100以内的随机数
		cout<<v_int[i]<<", "; 
	}
	cout<<endl;
	
	auto it=v_int.cbegin();
	int a[v_int.size()];
	cout<<"数组的内容是："<<endl;
	for(auto &val:a){
		val=*it++;
		cout<<val<<", ";
	}
	cout<<endl;
	
	
}

