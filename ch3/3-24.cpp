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
	//��˳��������ڵĺ�
	cout<<"��˳��������ڵĺ�"<<endl; 
	while(beg!=end){
		cout<<*beg+*beg++<<endl;
	}
	//�������
	beg=text.begin(),end=text.end();
	cout<<"������ߵĺ�"<<endl;
	while(beg!=end){
		cout<<(*beg++)+(*--end)<<endl;
	} 
	return 0;
}

