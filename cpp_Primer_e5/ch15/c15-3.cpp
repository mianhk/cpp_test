#include <iostream>
using namespace std;
//”–Œ Ã‚ 
class Quote{
	public:
		Quote()=default;
		Quote(const std::string &book,double sales_price):
			bookNo(book),price(sales_price){};
		std::string isbn() const{return bookNo;}
		virtual double net_price(std::size_t n) const {return n*price;}
		virtual ~Quote()=default;
	private:
		std::string bookNo;
	protected:
		double price=0.0;
};

class Bulk_quote:public Quote{
	public:
		Bulk_quote(const std::string &book,double sales_price):Quote(book,sales_price){
		};
//		double net_price(std::size_t n) const override;
};

double print_total(ostream &os,const Quote &item,std::size_t n){
	double ret=item.net_price(n);
	os<<"ISBN: "<<item.isbn()<<" # sold:"<<n<<"total due: "<<ret<<endl;
	}
int main(){
	Quote q("12345",20);
	Bulk_quote bq("22222",30);
	print_total(cout,q,3);
	print_total(cout,bq,5);
	return 0;
}
