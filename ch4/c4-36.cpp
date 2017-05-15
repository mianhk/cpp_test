#include <iostream>
using namespace std;
int main()
{
	int i=6;
	double d=3.4;
	i*=static_cast<int>(d);
	cout<<i<<endl;
	return 0;
}

