#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <numeric>
using namespace std;

int main(){
	vector<double> dv={1.1,0.2,0.3,0.4};
	double d=accumulate(dv.begin(),dv.end(),0);
	cout<<d<<endl;
	return 0;
}
