#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <string>

using namespace std;
void change_val(string &s,const string &oldVal,const string &newVal);
int main(){
	string s="tho thro tho!";
	change_val(s,"thro","through");
	cout<<s<<endl;
	change_val(s,"tho","though");
	cout<<s<<endl;
	return 0;
}

void change_val(string &s,const string &oldVal,const string &newVal){
//	auto ol=oldVal.size();
	if(!oldVal.size()){
		return;
	}
	auto iter=s.begin();
	while(iter!=s.end()-oldVal.size()){
		auto iter1=iter;
		auto iter2=oldVal.begin();
		while(iter2!=oldVal.end()&&*iter1==*iter2){
			++iter1;
			++iter2;
		}
		if(iter2==oldVal.end()){
			iter1=s.erase(iter,iter1);
			if(newVal.size()){
				iter2=newVal.end();
				do{
					--iter2;
					iter=s.insert(iter,*iter2);
					
				}while(iter2!=newVal.begin());
			}
			if(iter!=s.end()-newVal.size()-1)  //判断不加的话会报错 
				iter+=newVal.size();
		}
		else{
			iter++;
		}
	}
}
