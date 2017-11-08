//#ifndef DATE_H_INCLUDED
//#def DATE_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
//#include <stdexpt>
using namespace std;


class Date{
	public:
		string mon_full={""};

		Data(const string &s){
			int flag=0x00;
			string s1;
//			if(s.find("0123456789")==string::npos){
////				throw invalid_argument("没有数字，日期非法");
//				cout<<"输入错误"<<endl;
//			}
			if(s.find(",")!=string::npos){
				flag=0x01;
				year=stoi(s.substr(s.find_last_of(","),s.size()-1));
				cout<<year;
				day=stoi(s.substr(s.find_first_of(" "),s.find_first_of(",")));
				s1=s.substr(s.find(" "));
			}
			else if(s.find("/")!=string::npos){
				flag=0x10;
				day=stoi(s.substr(0,s.find_first_of("/")));
				mon=stoi(s.substr(s.find_first_of("/"),s.find_last_of("/")));
				year=stoi(s.substr(s.find_first_of("/"),s.size()-1));
			}
			else if(s.find(" ")!=string::npos){
				flag=0x11;
			}
			switch(flag){
				case 0x01:
				case 0x10:
					if(s1.find("Jan")!=string::npos) mon=1;
					if(s1.find("Feb")!=string::npos) mon=2;
					if(s1.find("Mar")!=string::npos) mon=3;
					if(s1.find("Apr")!=string::npos) mon=4;
					if(s1.find("May")!=string::npos) mon=5;
			}
		}
		void print_date(){
			cout<<year<<" "<<mon<<" "<<day<<endl;
		}
	private:
		unsigned year,mon,day;
};
