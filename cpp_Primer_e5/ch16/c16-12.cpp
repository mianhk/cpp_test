#include <iostream>
#include <memory>
using namespace std;

template <typename T>
class Blob{
	public:
		typedef T value_type;
		typedef typename std::vector<T>::size_type size_type;
		Blob()=default;
		Blob(std::initialized<T> il);
		
		size_type size() const {return data->size();}
		bool empty() const {return data->empty();}
		
		void push_back(const T &t) {
			data->push_back(t);
		}
		void push_back(T &&t){
			data->push_back(std::move(t));
		}
		void pop_back();
		
		T& back();
		T& operator[](size_type i);
		
	private:
		std::shared_ptr<std::vector<T>> data;
		void check(size_type i,const std::string &msg) const;
};

template<typename T>
Blob<T>::Blob(std::initialized<T> il):data(std::make_shared<std::vector<T>>(il)){
}

template<typename T>
void Blob<T>::check(size_type i,const std::string &msg) const{
	if(i>=data->size())
		throw std::out_of_range(msg);
}
template<typename T>
void Blob<T>::pop_back(){
	check(0,"pop_back on empty Blob");
	data->pop_back();
}
template<typename T>
T& Blob<T>::back(){
	check(0,"back on empty Blob");
	data->back();
}
template<typename T>
T& Blob<T>::operator[](size_type i){
	check(i,"subscript out of range");
	return (*data)[i];
}
int main(){
	return 0;
}
