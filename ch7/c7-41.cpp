#include <iostream>
#include <string>
using namespace std;
class Sales_data{
	public:
		Sales_data(std::string s,unsigned n,double p):
			bookNo(s),sales(n),price(p){
				std::cout<<"三个参数的构造函数"<<std::endl;
			}
		Sales_data():Sales_data("",0,0.0){
			std::cout<<"无参构造函数"<<std::endl;
		}
		Sales_data(std::string s):Sales_data(s,0,0.0){
			std::cout<<"有一个参数的构造函数"<<std::endl;
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
