#include <iostream>
#include <vector>
#include "Chapter6.h"
using namespace std;
int main()
{
	vector<int> vInt={1,2,3,4,5,6,7,78,8};
	print_v(vInt,0); 
	return 0;
}

void print_v(vector<int> vInt,int index){
//	unsigned sz=vInt.size();
	if(!vInt.empty()&& index!=vInt.size()){
		cout<<vInt[index]<<endl;
		print_v(vInt,index+1);
	}
}
