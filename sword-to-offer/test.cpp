#include <iostream>
#include <vector>
using namespace std;
bool find(int target,vector<vector<int>> array){
	bool found=false;
	if(!array.size())
		return found;
	int row=0;
	int column=array.size()-1;
	while(column>=0){
		if(target<array[0][column]){
			--column;
			continue;
		}
		else{
			while(row<=array.size()){
				if(target==array[row][column])
				{
					found=true;
					break;
				}
				row++;
			}
		}
		--column;
	}
	return found;
}
int main(){
	vector<vector<int>> array={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	int target=1;
	cout<<find(target,array)<<endl;
//1,[[1,2,8,9],[2,4,9,12],[4,7,10,13],[6,8,11,15]]
//	cout<<array[0][0]<<endl;
	return 0;
}
