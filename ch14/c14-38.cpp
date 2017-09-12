#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class CmpString{
	public:
		CmpString(size_t i):length(i){
		};
		bool operator()(const string &s){
			return length==s.length();
		}
	private:
		size_t length;
};

int main(){
	fstream in("F:\\cpp_test\\ch14\\data\\data3.txt");
	vector<string> svec;
	const int MIN_LENGTH=1;
	const int MAX_LENGTH=10;
//	map<size_t,size_t> count_words;
	string s;
	while(in>>s){
		svec.push_back(s);
	}
	for(int i=MIN_LENGTH;i!=MAX_LENGTH+1;++i){
		CmpString cs(i);
		cout<<"长度为"<<i<<"的单词有"<<count_if(svec.cbegin(),svec.cend(),cs)<<"个"<<endl; 
	}

	

	return 0;
}
