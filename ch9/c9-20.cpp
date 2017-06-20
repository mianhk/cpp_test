#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
using namespace std;
int main(){
	list<int> ilst={1,2,3,4,5,6,7,8,89,1,2,4,43,4234,5,45};
	deque<int> de1;
	deque<int> de2;
	for(auto i:ilst){
		(i%2)?(de1.push_back(i)):(de2.push_back(i));
	}
	for(auto d:de1){
		cout<<d<<",";
	}
	cout<<endl;
	cout<<"###############"<<endl;
	for(auto d:de2){
		cout<<d<<",";
	}
}
