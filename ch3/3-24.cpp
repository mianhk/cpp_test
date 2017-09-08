#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int i;
	vector<int> text;
	while(cin>>i){
		text.push_back(i);
	}
	auto beg=text.begin(),end=text.end();
	//按顺序输出相邻的和
	cout<<"按顺序输出相邻的和"<<endl; 
	while(beg!=end){
		cout<<*beg+*beg++<<endl;
	}
	//输出两边
	beg=text.begin(),end=text.end();
	cout<<"输出两边的和"<<endl;
	while(beg!=end){
		cout<<(*beg++)+(*--end)<<endl;
	} 
	return 0;
}

