#include <iostream>
#include <vector>
using namespace std;
class Foo{
	public:
		Foo sorted() &&;
		Foo sorted() const &;
		
		
	private:
	vector<int > data;	
		
	
};
Foo Foo::sorted() const &{
	
}



int main(){
	return 0;
}
