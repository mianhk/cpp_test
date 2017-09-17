#include <iostream>
using namespace std;
const int MIM_BULK=20;
class Quote{
	public:
		Quote()=default;
		Quote(const std::string book,double sales_price):bookNo(book),price(sales_price){
		};
		std::string isbn() const{return bookNo;}
		virtual double net_price(std::size_t n){return n*price;}
		virtual ~Quote()=default;
	private:
		std::string bookNo;
	protected:
		double price;
};

class Bulk_quote:public Quote{
	public:
		Bulk_quote(const std::string book,double sales_price):Quote(book,sales_price){
		};
		double net_price(std::size_t n){
			if(n>MIM_BULK)
				return n*price*0.8;
			else
				return n*price;
		}
};
void print_total(ostream& os,Quote& item,std::size_t cnt){
	cout<<" ISBN: "<<item.isbn()<<" summary price:"<<item.net_price(cnt)<<endl;
}
int main(){
	Quote q("11111",12.8);
	Bulk_quote bq1("11112",12.8);
	Bulk_quote bq2("11113",12.8);
	print_total(cout,q,20);
	print_total(cout,bq1,10);
	print_total(cout,bq2,30);
	return 0;
}
