#include <iostream>
using namespace std;

class PrivateCopy{
	private:
	PrivateCopy(const PrivateCopy&);
	PrivateCopy &operator=(const PrivateCopy&);
	public:
		PrivateCopy()=default;
		~PrivateCopy();
	
};
int main()
{
	return 0;
}

