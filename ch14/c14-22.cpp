#include <iostream>
#include <string>
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
	Sales_data &operator=(const Sales_data &);//拷贝赋值运算符 
	Sales_data &operator+=(const Sales_data&);//重载的+=运算符 
	Sales_data& operator-=(const Sales_data &);
	Sales_data &operator=(const string &);
//	Sales_data &operator-=(const Sales_data&);//重载的-=运算符 
//	Sales_data &operator-(const Sales_data&,const Sales_data&);//重载的-运算符 
	//在类内声明，类外定义 
	Sales_data(std::istream &);
	
	
	std::string isbn() const {return bookNo;}
	unsigned get_units_sold() const {return units_sold;}
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

Sales_data& Sales_data::operator+=(const Sales_data &rhs){
//	Sales_data item=rhs;
//	bookNo+=rhs.bookNo;
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}

Sales_data& Sales_data::operator=(const Sales_data &rhs){
	Sales_data item;
//	item.bookNo=rhs.bookNo;
	item.units_sold=rhs.units_sold;
	item.revenue=rhs.revenue;
	return item;
}
Sales_data
operator+(const Sales_data &lhs,const Sales_data &rhs){
	Sales_data sum=lhs;
	sum+=rhs;
	return sum;
}

Sales_data& Sales_data::operator-=(const Sales_data &rhs){
//	bookNo=rhs.bookNo;
	units_sold-=rhs.units_sold;
	revenue-=rhs.revenue;
	return *this;
}
Sales_data 
operator-(const Sales_data &lhs,const Sales_data &rhs){
	Sales_data item=lhs;
	item-=rhs;
	return item;
}

Sales_data& Sales_data::operator=(const string &s){
	bookNo=s;
	return *this;
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
	cout<<item.isbn()<<" "<<item.get_units_sold()<<" "<<item.get_revenue();
	return os;
}

int main(){
//	fstream is("F:\\cpp_test\\ch14\\data\\data1.txt");
//	Sales_data sales;
//	
//	is>>sales;
	fstream is("F:\\cpp_test\\ch14\\data\\data1.txt");

	Sales_data sales;
	is>>sales;
	cout<<sales<<endl;
	string a("123456");
	sales=a;
	cout<<sales<<endl;
//	cout<<sales<<endl;
//	Sales_data sales2("1211111",23,4.6);
//	cout<<sales2;
//	cout<<endl;
//	Sales_data sales3=sales+sales2;
//	cout<<sales3<<endl;
//	sales3+=sales;
////	sales3=sales+sales2;
//	cout<<sales3<<endl;
//	sales3-=sales;
//	cout<<sales3<<endl;
	return 0;
}
