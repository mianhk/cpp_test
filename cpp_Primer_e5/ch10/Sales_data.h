#include <iostream>

class Sales_data{
	public:
		Sales_data()=default;
		Sales_data(const string &s){
			if(s){
				isbn=s;
			}
		}
		bool compareIsbn(Sales_data &b){
			return this->isbn<b.isbn;
		}
	private:
		std::string isbn;
};
