#include <iostream>
#include <vector>

using namespace std;

bool Verify(vector<int> sequence,int start,int end){
	if(start==end)
		return false;
    int i=start;
	for(;i<end-1;++i){
		if(sequence[i]>sequence[end-1]){
//			cout<<i<<endl;
            break;
        }
	}
	for(int j=i;j<end-1;++j){
        if(sequence[j]<sequence[end-1]){
                return false;
            }
        }
//    cout<<i<<endl;  
	bool left=true;
	if(i>start)
		left=Verify(sequence,start,i);
		
	bool right=true;
	if(i<end-1)
		right=Verify(sequence,i,end-1);
    return left&&right;
}

bool VerifySquenceOfBST(vector<int> sequence) {
	return Verify(sequence,0,sequence.size());
}


    
int main(){
	vector<int> sequence={1,3,4,9,15,13,10};
	cout<<VerifySquenceOfBST(sequence)<<endl;
	return 0;
} 
