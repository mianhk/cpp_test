#include <iostream>
#include <vector>
using namespace std;
int absolute(int *val);
int count_foobar();
void change_value(int *p,int *q);
void reset(int *p);
void change_value(int &c1,int &c2);
//17
bool has_upper(const string& s);
void to_lower(string& s);

int cmp_int(int i1,int* i2);

void change_point(int *i1,int *i2);

int add_all(initializer_list<int> il);

void swap(int &v1,int &v2);

int &get(int *array,int index);

void print_v(vector<int> vInt,int index);