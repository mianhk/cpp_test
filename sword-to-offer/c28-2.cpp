#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

void Permutation(string str,int i){
//	 result;
//cout<<str<<"  **  "<<str.size()<<" "<<i<<endl;
	if(i==str.size()){
		cout<<str<<endl;
		//result.push_back(str);
		//return result;
	}
	else{
		for(int t=i;t<str.size();++t){
			if(t!=i&&str[i]==str[t])
				continue;
			char temp=str[i];
			str[i]=str[t];
			str[t]=temp;
//			cout<<str<<"  sdsd"<<endl;
			Permutation(str,i+1);
			
			temp=str[i];
			str[i]=str[t];
			str[t]=temp;
		}
	}
}

int main(){
	string str("abc");
	vector<string> svec;
	Permutation(str,0);
	for(auto ss:svec)
		cout<<ss<<endl;
}
