#include <string>
#include <iterator>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
	ifstream in("F:\\cpp_test\\ch10\\integer.txt");
	ofstream out1("F:\\cpp_test\\ch10\\odd.txt");
	ofstream out2("F:\\cpp_test\\ch10\\even.txt");
	istream_iterator<int> int_it(in);
	istream_iterator<int> eof;
	ostream_iterator<int> int_outit1(out1," ");
	ostream_iterator<int> int_outit2(out2,"\n");
	while(int_it!=eof){
		if((*int_it)%2){
			*int_outit1++=*int_it++;
		}
		else
			*int_outit2++=*int_it++;
	}
	return 0;
}
