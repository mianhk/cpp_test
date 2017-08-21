#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
vector<int> *new_vector(void){
	return new (nothrow) vector<int>;
}
void read_ints(ifstream &in,vector<int> *pv){
	int v;
	while(in>>v){
		pv->push_back(v);
	}
}
void print_ints(vector<int> *pv){
	for(const auto &v:*pv){
		cout<<v<<" ";
	cout<<endl;
	}
}
int main(){
	ifstream in("F:\\cpp_test\\ch12\\ints.txt");
	vector<int> *pv=new_vector();
	if(!pv){
		cout<<"ÄÚ´æ²»×ã£¡"<<endl;
		return -1;
	}
	read_ints(in,pv);
	print_ints(pv);
	delete pv;
	pv=nullptr;
	return 0;
}
