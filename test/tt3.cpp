#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


print(){
	
}
int main(){
//	double a,b; int w; long c;
//	a=b=1.0;
//	w=a==b;
//	cout<<w<<endl;
	
	
	
	vector<int>array;  
    array.push_back(100);  
    array.push_back(300);  
    array.push_back(300);  
    array.push_back(500);  
    vector<int>::iterator itor;  
    for(itor=array.begin();itor!=array.end();)  
    {  
    	
        if(*itor==300)  
        {  
            itor = array.erase(itor);
			cout<<*itor<<endl;  
        }  
        else
             itor++;
    }  
    for(itor=array.begin();itor!=array.end();itor++)  
    {  
        cout<<*itor<<" ";  
    }  
    return 0;  
    
//	int ii;
//	cout<<ii<<endl;
//	short c=65537;
//	int b=c+1;
//	printf("%d,++ %d",c,b);
//	printf("%s , %5.3s\n","computer","computer");
//	//´òÓ¡²âÊÔfalse 
//	bool x=false;
//	cout<<x<<endl;
//	
//	//²âÊÔchar
//	char str[6]="Hello";
//	cout<<str<<endl; 
//	
//	char a[5][10]={ "abcdef", "ghijkl", "mnopq", "rstuv", "wxyz"};
////	for(int i=0;i!=;++i)
////		for(int j=0;j!=a[0].size();++j)
////			cout<<a[i][j]<<endl;
//int i=0,sum=0;
//	for( i=0;i<10;++i,sum+=i)
//		cout<<i<<endl;
//	cout<<i<<endl;
//	cout<<sum<<endl;
//	return 0;
}
