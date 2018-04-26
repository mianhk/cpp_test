#include <iostream>
#include <vector>
#include <fstream>
#include <memory>
using namespace std;

shared_ptr<vector<int>> new_vector(void){
	return make_shared<vector<int>>();
}
void read_ints(ifstream &in,shared_ptr<vector<int>> spv){
	int v;
	while(in>>v){
		spv->push_back(v);
	}
}
void print_ints(shared_ptr<vector<int>> spv){
	for(const auto &v:*spv){
		cout<<v<<" ";
	}
	cout<<endl;
}
int main(){
	ifstream in("F:\\cpp_test\\ch12\\ints.txt");
//	shared_ptr<vector<int>> svec;
	auto svec=new_vector();
	read_ints(in,svec);
	print_ints(svec);
	return 0;
}
