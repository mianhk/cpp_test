#include <map>
#include <iostream>
using namespace std;
int main(){
	map<string,size_t> words_count;
	string word;
	while(cin>>word){
		++words_count[word];
	}
	for(const auto &w:words_count){
		cout<<w.first<<" �����ˣ�"<<w.second<<"��    ";
	}
	return 0;
}
