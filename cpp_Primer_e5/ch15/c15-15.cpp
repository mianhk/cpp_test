#include <iostream>

using namespace std;

class Quote{
	public:
		Quote()=default;
		Quote(const std::string &book,double n):bookNo(book),price(n){
		};
		virtual double net_price(std::size_t cnt) const=0;
		~Quote()=default;
	protected:
		double price;
	private:
		std::string bookNo;
};

class Disc_quote:public Quote{
	public:
		Disc_quote(const std::string &book,double n,std::size_t q,double d):
		Quote(book,n),quantity(q),discount(d){
		};
		double net_price(std::size_t cnt) const=0;
	protected:
		std::size_t quantity;
		double discount;
};

class Bulk_quote:public Disc_quote{
	public:
		Bulk_quote(const std::string &book,double n,std::size_t q,double d):Disc_quote(book,n,q,d){
		};
		
		double net_price(std::size_t cnt) const{
			if(cnt>quantity)
				return cnt*(1-discount)*price;
			else
				return cnt*price;
			
		}

};
int main(){
//	Disc_quote dq("12345",20,10,0.5);
	Bulk_quote bq("12345",20,10,0.5);
	cout<<bq.net_price(30)<<endl;
	return 0;
}
