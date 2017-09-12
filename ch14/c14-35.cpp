#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class PrintString{
	public:
	PrintString()=default;
	string operator()(istream &in){
		string line;
		if(!getline(in,line))
			line=" ";
		return line;
	}
};

int main(){
	PrintString ps;
	fstream in("F:\\cpp_test\\ch14\\data\\data1.txt");
	cout<<ps(in);
	return 0;
}
