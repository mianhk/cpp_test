#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
//vector<string> result;
void Permutation(vector<string> result,string str,size_t i){
	if(i==str.size())
        result.push_back(str);
    else{
//    	Permutation(result,str,i++);
        for(int k=i+1;k<str.size();++k){
        	if(str[k]!=str[i]){
        		char temp=str[k];
            str[k]=str[i];
            str[i]=temp;
            Permutation(result,str,k+1);
                
            temp=str[k];
            str[k]=str[i];
            str[i]=temp;
			}
            
                
                
            }
        }
    }
vector<string> Permutation(string str) {
    vector<string> result;
    if(str.size()==0)
        return result;
    Permutation(&result,str,0);
    return result;
}
    
int main(){
	string str("abc");
	vector<string> svec;
	svec=Permutation(str);
	for(auto ss:svec)
		cout<<ss<<endl;
}
