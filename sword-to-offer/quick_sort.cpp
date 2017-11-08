#include <iostram>
using namespace std;

int Partition(int data[],int length,int start,int end){
	if(data==NULL ||length<0||start<0||end<0){
		throw new std::exception("Invalid Paramiters");
	}
	
	int index=RandomInRange(start,end);
	swap(&data[index],&data[end]);
}

int main(){
	return 0;
}
