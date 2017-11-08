#include <iostream>
using namespace std;
class Function{
	public:
		Function()=default;
		int operator()(int a, int b,int c){
		    return (a>0)?b:c;
		}
};
int main(){
	Function f;
	cout<<f(1,2,3);
	return 0;
}
