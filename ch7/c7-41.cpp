#include <iostream>
#include <string>
using namespace std;
class Sales_data{
	public:
		Sales_data(std::string s,unsigned n,double p):
			bookNo(s),sales(n),price(p){
				std::cout<<"���������Ĺ��캯��"<<std::endl;
			}
		Sales_data():Sales_data("",0,0.0){
			std::cout<<"�޲ι��캯��"<<std::endl;
		}
		Sales_data(std::string s):Sales_data(s,0,0.0){
			std::cout<<"��һ�������Ĺ��캯��"<<std::endl;
		}
	private:
		std::string bookNo;
		unsigned sales=0;
		double price=0.0;
};

int main(){
	Sales_data first("kaishi",3,2.3);
	Sales_data second;
	Sales_data third("nihao");
	return 0;
} 
