#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,7};
	vector<int> v(begin(a),end(a));
	for(auto vv:v){
		cout<<vv<<endl;
	}
	//�ڶ��ַ�ʽ
	cout<<"###############"<<endl;
	vector<int> v2(a,a+6);
	for(auto vv2:v2){
		cout<<vv2<<endl;
	} 
	return 0;
}

