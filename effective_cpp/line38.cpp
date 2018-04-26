#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
template<typename T>
class MySet{
public:
	bool member(const T& item) const;
	void insert(const T& item);
	void remove(const T& item);
	size_t size() const;
private:
	std::list<T> rep;  //用来表述set的数据 
};
template<typename T>
bool MySet::member(const T& item) const{
	return std::find(rep.begin(),rep.end(),item)!=rep.end();
}
template<typename T>
void MySet::insert(const T& item){
	if(!member(item))
		rep.insert(item);
}
template<typename T>
void remove(const T& item){
	typename std::list<T>::iterator it=std::find(rep.cbegin().rep.cend(),item);
	if(it!=rep.cend())
		rep.erase(it);
}
template<typename T>
size_t size() const{
	return rep.size();
}
int main(){
	MySet<int> myset;
	myset.insert(12);
	myset.insert(13);
	myset.insert(12);
	myset.insert(16);
	cout<<myset.size()<<endl;
	return 0;
}
