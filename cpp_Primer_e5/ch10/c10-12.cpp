#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

class Sales_data{
	friend bool compare_isbn(Sales_data s1,Sales_data s2);
	public:
		Sales_data()=default;
		Sales_data(const string &s){
				isbn=s;
		}
		bool compareIsbn(Sales_data &b){
			return this->isbn.size()<b.isbn.size();
		}
		void print_isbn(){
			cout<<isbn<<endl;
		}
	private:
		std::string isbn;
};

bool compare_isbn(Sales_data s1,Sales_data s2);

int main(){
	fstream in("F:\\cpp_test\\ch10\\Sales_data.txt");
	string s;
	vector<Sales_data> sales;
	while(in>>s){
		Sales_data sale(s);
		sales.push_back(sale);
	}
//	sort(sales.begin(),sales.end());
	stable_sort(sales.begin(),sales.end(),compare_isbn);
	for(Sales_data s:sales){
		s.print_isbn();
	}
	return 0;
}
bool compare_isbn(Sales_data s1,Sales_data s2){
	return s1.isbn.size()<s2.isbn.size();
}
