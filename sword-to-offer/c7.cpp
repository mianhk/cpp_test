#include <iostream>
#include <stack>
//用两个栈实现队列 
using namespace std;

template<typename T>
class CQueue{
	public:
		CQueue()=default;
		~CQueue()=default;
		
		void appendTail(const T& node);
		T deleteHead();
		size_t size(){
			return stack1.size()+stack2.size();
		}
	private:
		stack<T> stack1;
		stack<T> stack2;
};

template<typename T>
void CQueue<T>::appendTail(const T& node){
	stack1.push(node);
}

template<typename T>
T CQueue<T>::deleteHead(){
	if(stack2.size()==0){
		
		while(stack1.size()>0){
			T& data=stack1.top();
			stack1.pop();
			stack2.push(data);
		}
		}
		
		if(stack2.size()==0){
			cout<<"ERROR"<<endl;
		}
		
		T head=stack2.top();
		
		stack2.pop();
		
		return head;
	
}
int main(){
	CQueue<int> iqueue;
	iqueue.appendTail(3);
	iqueue.appendTail(4);
	iqueue.appendTail(5);
//	cout<<iqueue.size()<<endl;
//	iqueue.deleteHead();
	cout<<iqueue.deleteHead()<<endl;
	cout<<iqueue.deleteHead()<<endl;
	return 0;
}
