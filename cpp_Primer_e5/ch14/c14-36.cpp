#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <memory>
using namespace std;
class PrintString{
	public:
	PrintString()=default;
	string operator()(istream &in){
		string line;
		if(!getline(in,line))
			line="";
		return line;
	}
};

int main(){
	PrintString ps;
	fstream in("F:\\cpp_test\\ch14\\data\\data2.txt");
	vector<string> svec;
	while(true){
		string line=ps(in);
		if(!line.empty())
			svec.push_back(line);
		else
			break;
	}
	for(auto s:svec){
		cout<<s<<endl;
	}
//	cout<<ps(in);
	return 0;
}
