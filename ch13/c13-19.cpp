#include <iostream>
#include <string>
using namespace std;
class Employee{
	public:
		Employee(){
			id++;
		}
		Employee(const string &sname):
			name(sname){
				id++;
			}
		Employee(Employee& e){
			name=e.name;
			id=e.id;
		}
		Employee& operator=(Employee &rhs){
			name=rhs.name;
			return *this;
		}
		void print_id(){
			cout<<id<<endl;
		}
	private:
		string name;
		static int id;
};
int Employee::id=0;
int main()
{
	
	Employee e1,e2("we");
	Employee e3;
	e3.print_id();
	return 0;
}

