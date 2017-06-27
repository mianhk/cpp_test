#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
//#inlcude "Sales_data.h"
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
//	private:
		std::string isbn;
};

int main(){
	ifstream in("F:\\cpp_test\\ch10\\Sales_data.txt");
	if(!in){
		cout<<"输入错误"<<endl;
	}
	vector<Sales_data> sales;
	string s;
	while(in>>s){
		Sales_data sale(s);
		sales.push_back(sale);
	}
	cout<<"打印排序前的isbn"<<endl;
	for(Sales_data i:sales){
		i.print_isbn();
	}
	cout<<"**************"<<endl;
	cout<<"打印排序后的isbn"<<endl;
	sort(sales.begin(),sales.end(),[](const Sales_data &sale1,const Sales_data &sale2){return sale1.isbn.size()<sale2.isbn.size();
	});
	for(Sales_data i:sales){
		i.print_isbn();
	}
	return 0;
}
