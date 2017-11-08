#include <iostream>
#include <fstream>
using namespace std;
class Sales_data{
	friend ostream &operator<<(ostream &os,const Sales_data &item);
	friend istream &operator>>(istream &is,Sales_data &item);
	friend std::ostream &print(std::ostream&,const Sales_data&);
	friend std::istream &read(std::istream&,Sales_data&); 

	public:
	//�����Ĺ��캯��
	Sales_data()=default;
	Sales_data(const std::string &s):bookNo(s){
	}
	Sales_data(const std::string &s,unsigned n,double p):
		bookNo(s),units_sold(n),revenue(p*n){
		}
	//���������������ⶨ�� 
	Sales_data(std::istream &);
	
	
	
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);
	
	private:
	//	std::string isbn;
		std::string bookNo;
		unsigned units_sold=0;
		double revenue=0.0;
		double avg_price() const {return units_sold?revenue/units_sold:0;}

};



//�ǳ�Ա�ӿں���
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

//Sales_data::Sales_data(std::istream &is){
//	read(is,*this);
//}
std::ostream &print(std::ostream& os,const Sales_data& item){
	os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
	return os;
}
Sales_data add(const Sales_data& item1,const Sales_data& item2){
	Sales_data sum=item1;
	sum.combine(item2);
	return sum;
}

ostream &operator<<(ostream &os,const Sales_data &item){
		os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
		return os;
	}
	
	
istream &operator>>(istream &is,Sales_data &item){
	double price;
	is>>item.bookNo>>item.units_sold>>price;
	if(is)
		item.revenue=item.units_sold*price;
	else
		item=Sales_data();//����ʧ�ܣ����󱻸���Ĭ�ϵ�״̬
	return is; 
}


int main(){
	Sales_data sales("1111111",12,3);
	fstream is("F:\\cpp_test\\ch14\\data\\data1.txt");

	Sales_data sales2;
	is>>sales2;
	print(cout,sales2);
	cout<<endl;
	cout<<sales2;
	return 0;
}
//double Sales_data::avg_price() const{
//	if(units_sold)
//		return revenue/units_sold;
//	else 
//		return 0;
//}
