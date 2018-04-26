#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> maxInWindows1(const vector<int>& num, unsigned int size){
	vector<int> max_result;
	deque<int> ideque;
	for(int i=0;i!=num.size();++i){
		while(ideque.size()&&num[i]>=num[ideque.back()]){
			ideque.pop_back();
		}
		while(ideque.size()&&i-ideque.front()+1>size){
			ideque.pop_front();
		}
		ideque.push_back(i);
		if(size&&i+1>=size){
			max_result.push_back(num[ideque.front()]);
		}
	}
	return max_result;
}

vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> max_result;
        int temp=num[0];
        //int i=0;
        if(num.size()==0||size==0)
            return max_result;
        for(int i=0;i<size;++i){
            if(i<num.size()&&temp<num[i])
                temp=num[i];
        }
        max_result.push_back(temp);
        for(int i=size;i!=num.size();++i){
            if(num[i]>temp){
            	max_result.push_back(num[i]);
            	temp=num[i];
			}
                
            else{
            	
            	cout<<"temp"<<temp<<endl;
            	max_result.push_back(temp);
			}
                
        }
        return max_result;
    }
    
int main(){
	vector<int> num={2,3,4,2,6,2,5,1};
	vector<int> result;
	result=maxInWindows1(num,3);
	for(auto aa:result)
		cout<<aa<<" ";
	cout<<endl;
	return 0;
}
