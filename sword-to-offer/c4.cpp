#include <iostream>
/*
��ÿ���ַ����Ŀո��滻��"%20" 

*/
using namespace std;
std::string& ReplaceBlank(std::string &toReplace){
	int blank=0;
	for(const auto &t:toReplace){
		if(t==" ")
			++blank;
	}
}


int main(){
	return 0;
}
