#include <iostream>
#include <vector>
#include "my_algorithm_heap.h"
//#include "my_vector.h"
using namespace std;

int main(){
	//my_vector<int> si;
	cout << "hello" << endl;
	int ia[9] = { 0, 1, 2, 3, 4, 8, 9, 3, 5 };
	vector<int> ivec(ia, ia + 9);
	make_heap(ivec.begin(), ivec.end());
	for (int i = 0; i != ivec.size(); ++i)
		cout << ivec[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}