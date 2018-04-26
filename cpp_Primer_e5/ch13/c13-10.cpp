#include <iostream>
using namespace std;
//¿½±´¸³ÖµÔËËã·û 
class HasPtr{
	public:
		HasPtr(const std::string &s=std::string()):
			ps(new std::string(s)),i(0){
			}
		HasPtr& operator=(const HasPtr &rhs){
			auto newps=new string(*rhs.ps);
			delete ps;
			ps=newps;
			i=rhs.i;
			return *this;
		}
		~HasPtr(){delete ps;
		}
	private:
		std::string *ps;
		int i;
};
int main()
{
	return 0;
}

