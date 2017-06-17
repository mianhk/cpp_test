#include <iostream>
using namespace std;
string:: size_type find_char(const string &s,char c,string:: size_type &occurs);
int main()
{
	string s{"dlkshdkajhsdjkan"};
	char c='d';
	cout<<s<<" "<<c<<endl;
	string:: size_type occurs;
	cout<<find_char(s,c,occurs)<<" "<<occurs<<endl;
	return 0;
}
string:: size_type find_char(const string &s,char c,string:: size_type &occurs){
	auto ret=s.size();
	occurs=0;
	for(decltype(ret) i=0;i!=s.size();++i){
		if(s[i]==c){
			cout<<occurs<<endl;
			if(ret==s.size())
			ret=i;
			++occurs;
		}
	}
	cout<<occurs<<endl;
	return ret;
}
