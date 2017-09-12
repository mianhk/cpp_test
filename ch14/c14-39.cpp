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
			return length>s.length();
		}
	private:
		size_t length;
};

int main(){
	fstream in("F:\\cpp_test\\ch14\\data\\data3.txt");
	vector<string> svec;
	const int MAX_LENGTH=10;
//	map<size_t,size_t> count_words;
	string s;
	while(in>>s){
		svec.push_back(s);
	}

	CmpString cs(MAX_LENGTH);
	size_t sum=count_if(svec.cbegin(),svec.cend(),cs);
	cout<<"����С��"<<10<<"�ĵ�����"<<sum<<"��"<<endl; 
	cout<<"���ȴ���"<<10<<"�ĵ�����"<<svec.size()-sum<<"��"<<endl; 

	

	return 0;
}
