#include <iostream>
#include <map>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;
//6 3
//1 4 2 5 6 7


int caculate(){
	string s="weqewq";
	cout<<s.size()<<endl;
	int tmp,n,k,result=0;
	map<int,int> num_map;
	fstream file("./ali_test.txt");
	file>>n>>k;
	while(file>>tmp){
		tmp%=k;
		if(tmp)
			num_map[tmp]++;
	}
	//如果只有两个数 ，直接返回大的 
	if(num_map.size()==2){
		for(auto x:num_map)
			result=(result>x.second?result:x.second);
		return result;
	}
	//不止两个数 
	for(auto x:num_map){
//		cout<<x.first<<": "<<x.second<<endl;
		int res_num=num_map[k-x.first];
//		cout<<res_num<<endl;
		if(res_num){
//			cout<<"k-x.first:"<<k-x.first<<endl;
			if((k-x.first)>x.first)
				result+=abs(res_num-x.second);
//			cout<<"result:"<<result<<endl;
		}
		else
			result+=x.second;
	}
	
	return result;
}

int main(){
	cout<<caculate()<<endl;
	return 0;
}

