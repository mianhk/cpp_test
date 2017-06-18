#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class PersonDemo{
	public:
		string name;
		vector<string> phones;
};

int main(){
	string line,word;
	vector<PersonDemo> people;
	ifstream in("F:\\cpp_test\\ch8\\phone_number.txt");
	if(!in){
		cerr<<"打开文件错误"<<endl;
		return -1;
	}
	while(getline(in,line)){
		PersonDemo info;
		istringstream record(line);
		record>>info.name;
		while(record>>word){
			info.phones.push_back(word);
		}
		people.push_back(info);
	}
	for(PersonDemo i:people){
		cout<<i.name<<"   "<<i.phones.size()<<endl;
	}
	
	return 0;
}
