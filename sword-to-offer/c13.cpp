#include <iostream>
#include <vector>

using namespace std;

void reOrderArray(vector<int> &array){
	int start=0;
	int start2=0;
	while(start2!=array.size()-2&&start!=array.size()-2){
//		start=start2;
		while((array[start]&1)){
			++start;
		}
		start2=start+1;
		while(!(array[start2]&1)){
			++start2;
		}
		
		if((start<array.size()-1)&&(start2<=array.size()-1)){
			int temp=array[start2];
			for(int i=0;i<start2-start;++i){
				array[start2-i]=array[start2-i-1];
			}
			array[start]=temp;
		}
//		else if(start==array.size()-1&&){
//			array[start2]=array[start];
//		}
			
	}
}


int main(){
	int i=4&1;
	cout<<i<<endl;
	vector<int> ivec={1,2,3,4,5,6,7,10};
	vector<int> ivec1={1,2,6,3,7,8};
	reOrderArray(ivec);
	for(auto ii:ivec){
		cout<<ii<<" ";
	}
 	return 0;
}
