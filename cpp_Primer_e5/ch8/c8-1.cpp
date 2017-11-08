#include <iostream>
#include <stdexcept>
using namespace std;
//函数声明 
istream& read_data(istream&);

istream& read_data(istream& is){
	int v;
	while(is>>v&& !is.eof()){
		if(is.bad()){
			throw runtime_error("IO流错误");
		}
		if(is.fail()){
			cerr<<"数据错误，请重试！"<<endl;
			is.clear();
			is.ignore(100,'\n');
			continue;
		
		}
		
		
	
		cout<<"打印的流："<<v<<endl;
	
	}
	is.clear();
	return is;
}
int main(){
	read_data(cin);
	return 0;
}
