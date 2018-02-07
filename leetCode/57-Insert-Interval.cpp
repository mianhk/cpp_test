#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Interval {
public:
   	int start;
	int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval){
		auto range=equal_range(intervals.begin(),intervals.end(),newInterval,
		[](Interval a, Interval b){return a.end<b.start;});
		auto iter1=range.first,iter2=range.second;
		if(iter1==iter2){
			intervals.insert(iter1,newInterval);
		}
		else{
			iter2--;
			iter2->start=min(newInterval.start,iter1->start);
			iter2->end=max(newInterval.end,iter2->end);
			intervals.erase(iter1,iter2);
		}
		return intervals;
    }
};

int main(){
	Solution solution;
	Interval a(1,2);Interval b(3,5);Interval c(6,7);Interval d(8,10);Interval e(12,16);
	vector<Interval> intervals=
	{a,b,c,d,e};
	Interval newInterval(4,9);
	solution.insert(intervals,newInterval);
	for(auto ii:intervals)
		cout<<ii.start<<"-"<<ii.end<<" ";
	cout<<endl;
	return 0;
}

