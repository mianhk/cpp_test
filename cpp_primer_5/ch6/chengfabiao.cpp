#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<10;++i){
		for(int j=i;j<10;++j){
			cout<<i<<"x"<<j<<"="<<i*j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

