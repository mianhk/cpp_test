#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char c1[]="hello";
	char c2[]="world";
	char c3[end(c1)-begin(c1)+end(c2)-begin(c2)];
	strcat(c1,c2);
	strcpy(c3,c1);
	cout<<c3<<endl;
	return 0;
}

