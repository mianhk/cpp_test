#include <iostream>
#include <vector>
using namespace std;
   static  bool isEven(int n)
    {
        return (n&1)==0;
    }
    
    void Reorder(vector<int> &array1,vector<int>::size_type length)
    {
    	
        if(array1.empty()||length==0)
            return ;
        auto p1=array1.begin();
        auto p2=array1.end()-1;
        
        while(p1<p2)
        {
        	cout<<"123"<<endl;
            while(((*p1)&1)){
            	 p1++;
            	 cout<<"12"<<endl;
			}
               
            while(!((*p2)&1)){
            	cout<<"124"<<endl;
            	 p2--;
			}
               
            if(p1<p2)
            {
                int temp=*p1;
                *p1=*p2;
                *p2=temp;
                cout<<*p1<<" "<<*p2<<endl;
            }
            
        }
        for(auto aa:array1){
        	cout<<aa<<" ";
		}
		cout<<endl;
    }

     void reOrderArray(vector<int> &array) {
        Reorder(array,array.size());
        
    }
    
    

int main(){
	vector<int> ivec={1,2,3,4,5,6,7};
	reOrderArray(ivec);
	return 0;
}
