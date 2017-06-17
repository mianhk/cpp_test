#include <iostream>
//#include <>
using namespace std;
int main()
{
	string s1,s2;
	do{
		cout<<"ÇëÊäÈëÁ½¸ö×Ö·û´®:"<<endl;
		cin>>s1>>s2;
		cout<<((s1.size()<s2.size())?s1:s2);	
	}
	while(cin);
	return 0;
}

