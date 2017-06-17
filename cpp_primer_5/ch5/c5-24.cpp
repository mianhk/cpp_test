#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
	int i1,i2;
	while(cin>>i1>>i2){
		if(i2==0){
			throw runtime_error();
		}
	}
	return 0;
}

