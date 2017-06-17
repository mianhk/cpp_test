#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int i;
	vector<int> word;
	while(cin>>i){
		word.push_back(i);
	}
	//输出相邻整数的和
	cout<<"输出相邻整数的和"<<endl;
	for(int k=0;k!=word.size()-1;){
		cout<<word[k]+word[++k]<<endl;
	} 
	//输出前后的和
	cout<<"输出前后的和"<<endl;
	for(int k=0,j=word.size()-1;j!=k;){
		cout<<word[k++]+word[j--]<<endl;
	} 
	return 0;
}

