#include <iostream>
#include <fstream>
using namespace std;
class Sales_data{
	friend std::ostream &print(std::ostream&,const Sales_data&);
	friend std::istream &read(std::istream&,Sales_data&); 
	friend istream &operator>>(istream &,Sales_data &);
	public:
	//新增的构造函数
	Sales_data()=default;
	Sales_data(const std::string &s):bookNo(s){
	}
	Sales_data(const std::string &s,unsigned n,double p):
		bookNo(s),units_sold(n),revenue(p*n){
		}
	//在类内声明，类外定义 
	Sales_data(std::istream &);
	
	
	std::string isbn() const {return bookNo;}
	double get_revenue() const {return revenue;}
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

Sales_data::Sales_data(std::istream &is){
	read(is,*this);
}

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

//double Sales_data::avg_price() const{
//	if(units_sold)
//		return revenue/units_sold;
//	else 
//		return 0;
//}
istream &operator>>(istream &is,Sales_data &item){
	double price;
	if(is){
		is>>item.bookNo>>item.units_sold>>price;
		item.revenue=item.units_sold*price;
	}
	else{
		cout<<"你输入错了";
		item=Sales_data();
	}
		
	return is;
}
ostream &operator<<(ostream &os,Sales_data &item){
	cout<<item.isbn()<<" "<<item.get_revenue();
	return os;
}
int main(){
//	fstream is("F:\\cpp_test\\ch14\\data\\data1.txt");
//	Sales_data sales;
//	
//	is>>sales;
	fstream is("F:\\cpp_test\\ch14\\data\\data1.txt");

	Sales_data sales2;
	is>>sales2;
	cout<<sales2;
	return 0;
}
