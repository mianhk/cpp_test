#include <iostream>
using namespace std;
void replaceSpace(char *str,int length) {
	if(*str==0||length<=0)
        return;
    int move_length=length;
    for(char *ptr=str;ptr!=str+length;++ptr){
        if(*ptr==' ')
            ++move_length;
        }
        cout<<move_length<<endl;
//    char move_string[move_length];
	char *ptr2=str+move_length*2;
	*ptr2='\0';
    for(char *ptr=str+length-1;ptr!=str-1;--ptr){
    	if(*ptr==' '){
    		--*ptr2='0';
    		--*ptr2='2';
    		--*ptr2='%';
		}
		else
			--*ptr2=*ptr;
	}
	for(char *p=str;p!=str+length;++p){
		cout<<*p<<endl;
	}
}

int main(){
	char s[100]="12313 2324";
	replaceSpace(s,10);
	for(auto ss:s){
		cout<<ss<<" ";
	}
	return 0;
}
