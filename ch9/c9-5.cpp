#include <iostream>
#include <vector>
using namespace std;
vector<int>::iterator find_int(vector<int>::iterator beg,vector<int>::iterator end,int i);
int main(){
	vector<int> v={1,2,3,44,5,6};
	int i=2;
	vector<int>::iterator it=find_int(v.begin(),v.end(),i);
	cout<<it-v.begin()<<endl;
//	cout<<(find_int(v,i)?"true":"false")<<endl;
	return 0;
}

vector<int>::iterator find_int(vector<int>::iterator beg,vector<int>::iterator end,int i){
	
	for(;beg!=end;beg++){
		if(*beg==i){
			return beg;
		}
		
	}
	return beg;
//	while(beg!=end){
//		if(*beg==i){
//			cout<<*beg<<endl;
//			return beg;
////			cout<<"end"<<endl;
////			break;
//		}	
////		cout<<*it<<endl;
//		beg++;
//	}

}


