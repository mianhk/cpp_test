#include <iostream>
#include <string>

using namespace std;

int main(){
	string s={"ab2c3d7R4E6"};
	string numbers={"1234567890"};
	string chars={"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
	cout<<s.find_first_of(numbers)<<endl;
	cout<<s.find_first_of(chars)<<endl;
	return 0;
}


