#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
	ifstream in("F:\\cpp_test\\ch7\\data");
	ofstream out("F:\\cpp_test\\ch7\\dataResult.txt");
	if(!in){
		cerr<<"无法打开输入文件"<<endl;
		return -1;
	} 
	string line;
	vector<string> words;
	while(in>>line){
		words.push_back(line);
		out<<line<<endl;
	}
	
	in.close();
	out.close();
	for(auto w:words){
		cout<<w<<endl;
	}
	
//	ofstream out("F:\\cpp_test\\ch7\\dataResult");
//	for(auto i=0;i!=words.end())
	
	return 0;
}
