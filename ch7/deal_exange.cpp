#include <iostream>
#include "Scales_data.h"
using namespace std;

int main(){
	cout<<"�����뽻�׼�¼��ISBN����������ԭ�ۡ�ʵ���ۼۣ���"<<endl;
	Sales_data total;
	if(read(cin,total)){
		Sales_data trans;
		while(read(cin,trans)){
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else{
				print(cout,total)<<endl;
				total=trans;
			}
		}
		print(cout,total)<<endl;
	}
	else{
		cerr<<"No data?"<<endl;
		return -1;
	}
	
	return 0;
}

