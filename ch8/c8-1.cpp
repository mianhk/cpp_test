#include <iostream>
#include <stdexcept>
using namespace std;
//�������� 
istream& read_data(istream&);

istream& read_data(istream& is){
	int v;
	while(is>>v&& !is.eof()){
		if(is.bad()){
			throw runtime_error("IO������");
		}
		if(is.fail()){
			cerr<<"���ݴ��������ԣ�"<<endl;
			is.clear();
			is.ignore(100,'\n');
			continue;
		
		}
		
		
	
		cout<<"��ӡ������"<<v<<endl;
	
	}
	is.clear();
	return is;
}
int main(){
	read_data(cin);
	return 0;
}
