#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	vector<int> text;
	srand((unsigned)time(NULL));
	for(int i=0;i<10;++i){
		text.push_back(rand()%1000);
	}
	cout<<"随机生成的十个数字是："<<endl;
	for(auto it=text.cbegin();it !=text.cend();++it){
		cout<<*it<<","; 
	}
	cout<<endl;
	cout<<"翻倍后的十个数字是："<<endl;
	for(auto it=text.cbegin();it !=text.cend();++it){
		cout<<2* *it<<","; 
	}
	return 0;
}

