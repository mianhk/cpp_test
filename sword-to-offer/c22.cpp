#include <iostream>
#include <stack>
//栈的压入，弹出序列 
using namespace std;


bool IsPopOrder(const int* pPush,const int* pPop,const int nlength){
	bool result=false;
	if(push==nullptr||pop==nullptr)
		return result;
	int *pNextPush=pPush;
	int* pNextPop=pPop;
	
	stack<int> stackData;
	while(pNextPop-pPop<nLength){
		while(stackData.empty()||stackData.top())!=*pNextPop){
			if(pNextPush-pPush==nLength)
				break;
			stackData.push(++*pNextPush);
		}
		if(stackData!=*pPop)
			break;
		stackData.pop();
		++pNextPush;
	}
	
	if(stackData.empty()&&pNextPop-pPop==nLength)
		result=true;
	return result;
}



int main(){
	return 0;
}
