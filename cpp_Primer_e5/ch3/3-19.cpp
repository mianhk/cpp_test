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
	//������������ĺ�
	cout<<"������������ĺ�"<<endl;
	for(int k=0;k!=word.size()-1;){
		cout<<word[k]+word[++k]<<endl;
	} 
	//���ǰ��ĺ�
	cout<<"���ǰ��ĺ�"<<endl;
	for(int k=0,j=word.size()-1;j!=k;){
		cout<<word[k++]+word[j--]<<endl;
	} 
	return 0;
}

