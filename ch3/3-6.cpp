#include <iostream>
using namespace std;
//��for���ַ�����������ַ�����xx��� 
int main()
{
	string s("sdhauikshdakhsd");
	for(auto &c:s){
		c="x";
	}
	cout<<s;
	return 0;
}

