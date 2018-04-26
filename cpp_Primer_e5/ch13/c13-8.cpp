#include <iostream>

using namespace std;

class HasPtr{
	public:
		HasPtr(const std::string &s=std::string()):
			ps(new std::string(s)),i(0){}
		HasPtr& operator=(const HasPtr&){
			
		}
	private:
		std::string *ps;
		int i;			
};

int main(){
	return 0;
}
