#include <iostream>
#include <queue>
//用两个队列实现一个栈 
using namespace std;

template<typename T>
class CStack{
	public:
		CStack()=default;
		~CStack()=default;
		
		T pop();
		void push(const T& item);
	private:
		queue<T> queue1;
		queue<T> queue2;
		
};

template<typename T>
T CStack<T>::pop(){
	if(queue2.size()<=0){
		while(queue1.size()>0){
			T temp=queue1.front();
			queue1.pop();
			queue2.push(temp);
		}
	}
	if(queue2.size()==0)
		cout<<"ERROR"<<endl;
	
	T head=queue2.front();
	queue2.pop();
	
	return head;
}

template<typename T>
void CStack<T>::push(const T& item){
	queue1.push(item);
}
int main(){
	CStack<int> istack;
	istack.push(1);
	istack.push(2);
	istack.push(3);
	cout<<istack.pop()<<endl;
	cout<<istack.pop()<<endl;
	return 0;
}
