#include <iostream>
#include <string>
#include <vector>
#include "date.h"
using namespace std;

int main(){
	string s={"1/1/1900"};
	Date date(s);
	date.print_date();
	return 0;
}


