
#include <iostream>
#include <string>
using namespace std;
class Sales_data{
	friend std::istream &read(std::istream& is,Sales_data& item);
	friend std::ostream &print(std::ostream& os,const Sales_data& item);
	public:
	//新增的构造函数
//	Sales_data()=default;	
	Sales_data(std::string s,unsigned n,double p):
	bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data():Sales_data("",0,0){
	}
	Sales_data(const std::string &s):Sales_data(s,0,0){
		std::cout<<"委托构造函数1"<<std::endl;
	}
	//在类内声明，类外定义 
	Sales_data(std::istream &):Sales_data(){
		std::cout<<"委托构造函数2"<<std::endl;
//		read(is,*this);
	}
	
	
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);
	
	private:
	//	std::string isbn;
		std::string bookNo;
		unsigned units_sold=0;
		double revenue=0.0;
		double avg_price() const {return units_sold?revenue/units_sold:0;}

};

//非成员接口函数
Sales_data add(const Sales_data&,const Sales_data&);
std::ostream &print(std::ostream&,const Sales_data&);
std::istream &read(std::istream&,Sales_data&); 


Sales_data& Sales_data::combine(const Sales_data& data1){
	units_sold+=data1.units_sold;
	revenue+=data1.revenue;
	return *this;
}

std::istream &read(std::istream& is,Sales_data& item){
	double price=0;
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=price*item.units_sold;
	return is;
}

std::ostream &print(std::ostream& os,const Sales_data& item){
	os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
	return os;
}
Sales_data add(const Sales_data& item1,const Sales_data& item2){
	Sales_data sum=item1;
	sum.combine(item2);
	return sum;
}


int main(){
	Sales_data sale1("kaishi");
	Sales_data sale2(cin);
	
	return 0;
}
