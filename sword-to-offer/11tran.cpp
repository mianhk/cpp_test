#include<vector>
#include<iostream>
using namespace std; 
class Solution {
public:
	    int GetUglyNumber_Solution1(int index) {
    	if(index==0)
            return 0;  //??????
        vector<int> result(index);
        result[0]=1;
        int x=0,y=0,z=0,i;
        for(i=1;i<index;i++){
            result[i]=min(result[x]*2,min(result[y]*3,result[z]*5));
            if(result[i]==result[x]*2)
                x++;
            if(result[i]==result[y]*3)
                y++;
            if(result[i]==result[z]*5)
                z++;
        }
        return result[index-1];
    }
    int GetUglyNumber_Solution(int index) {
        if(index<=0)
         return 0;
        
        int pUglyNumbers[index];//={0};
        
        pUglyNumbers[0]=1;
        for(int c:pUglyNumbers)
        	cout<<c<<" ";
        cout<<endl;
        int nextUglyIndex=1;
        int *pUgly2=pUglyNumbers;
        int *pUgly3=pUglyNumbers;
        int *pUgly5=pUglyNumbers;
        while(nextUglyIndex<index)
        {
            int min=Min(*pUgly2*2,*pUgly3*3,*pUgly5*5);
          	pUglyNumbers[nextUglyIndex]=min;
          	cout<<"min"<<*pUgly2<<" "<<*pUgly3<<" "<<*pUgly5<<endl;
            while(*pUgly2*2<=min)
                   {
                   	*pUgly2++;
					} 
            
             while(*pUgly3*3<=min)
             {
             	cout<<"pugly3   "<<*pUgly3<<"min"<<min<<endl;
             	*pUgly3 ++;
			 }
                   
             while(*pUgly5*5<=min)
                   {
                   	*pUgly5++;
					} 
            
            cout<<pUglyNumbers[nextUglyIndex]<<" "<<endl;
            ++nextUglyIndex;
        }
        return pUglyNumbers[nextUglyIndex-1];
        //cout<<ugly<<endl;
      
        //return ugly;
    }
    int Min(int number1,int number2,int number3)
    {
        int mn=(number1<number2)?number1:number2;
        //cout<<" de"<<mn<<number1<<number2<<number3<<endl;
        mn=(mn<number3)?mn:number3;
        //cout<<"de2"<<mn<<endl;
        return mn;
        
    }
};
int main ()
{
	Solution s;
	int a=s.GetUglyNumber_Solution(3);
	cout<<a<<endl; 

}
