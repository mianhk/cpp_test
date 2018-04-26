#include <iostream>
#include <vector>

using namespace std;

bool IsBit1(int num,int indexBit){
	num=num>>indexBit;
	return (num&1);
}
void FindNumsAppearOnce(vector<int> data,int* num1,int* num2){
	int resultOR=0;
	int indexBit=0;
	for(int i=0;i!=data.size();++i){
		resultOR^=data[i];
	}
	while((resultOR&1)==0&&(indexBit<8*sizeof(int))){
		resultOR>>1;
		++indexBit;
	}
	*num1=*num2=0;
	for(int i=0;i!=data.size();++i){
		if(IsBit1(data[i],indexBit))
			*num1^=data[i];
		else
			*num2^=data[i];
	}
}

int main(){
	vector<int> ivec={1,2,2,3,3,5,7,5,8,7};
	int num1,num2;
	FindNumsAppearOnce(ivec,&num1,&num2);
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
