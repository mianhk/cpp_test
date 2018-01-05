#include <iostream>
#include <string>

using namespace std;

 void ReverseSentence(string &str,int begin,int end){
        while(begin<end){
            char tmp=str[begin];
            str[begin]=str[end];
            str[end]=tmp;
            begin++;
            end--;
        }
    }
    string ReverseSentence(string str) {
        if(str.size()<=1)
            return str;
      	
        int begin=0;
        int end=0;
        
        //??????,???????????
        while(end!=str.size()){
            if(str[end]==' '){
            	//cout<<" weqeweq"<<endl;
                ReverseSentence(str,0,str.size()-1);
                cout<<str<<endl;
                break;
            }
            else
                ++end;
        }
        cout<<end<<endl;
        if(end==str.size()){
        	
        	return str;
		}
            
        end=0;
        //????,??????
        while(begin!=str.size()){
            if(str[begin]==' '){
                ++end;
                ++begin;
            }
            else if(str[end]==' '||end==str.size()){
            	cout<<end<<endl;
            	cout<<begin<<endl;
                ReverseSentence(str,begin,--end);
                begin=++end;
            }
            else
                ++end;
        }
        return str;
    }
    
int main(){
	string s="Hello World!";
	string rev=ReverseSentence(s);
	cout<<rev<<endl;
}
