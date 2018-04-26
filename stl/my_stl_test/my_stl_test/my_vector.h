//#ifndef __SGI_STL_INTERNAL_VECTOR_H
//#define __SGI_STL_INTERNAL_VECTOR_H
//__STL_BEGIN_NAMESPACE

template<class T, class Alloc = alloc>
class my_vector{
public:
	typedef T value_type;
	typedef value_type* pointer;
	typedef value_type* iterator;
	typedef value_type& reference;
	typedef size_t size_type;
	typedef ptrdiff_t different_type;

protected:
	typedef simple_alloc<value_type, Alloc> data_allocator; //SGI STL�Ŀռ�������
	iterator start;
	iterator finish;
	iterator end_of_range;

	void insert_aux(iterator position, const T& x);
	void deallocate(){
		if (start)
			data_allocator::deallocate(start, end_of_range - start);
	}

	void fill_initialize(size_type n, const T& value){
		start = allocate_and_fill(n, value);
	}

public:
	iterator begin();
	iterator end();
	size_type size() const{ return size_type(end() - begin()); }
	size_type capacity() const{ return size_type(end_of_range - begin()); }
	bool empty() const{ return begin() == begin(); }
	reference operator[](size_type n){ return *(begin() + n); }

	vector() :start(0), finish(0), end_of_range(0){}  //Ĭ�Ϲ��캯��
	vector(size_type n, const T& value){ fill_initialized(n, value); }
	vector(int n, const T& value){ fill_initialized(n, value); }
	vector(long n, const T& value){ fill_initialized(n, value); }
	explicit vector(size_type n){ fill_initialized(n, T()); }

	~vector(){
		destory(start, finish); //ȫ�ֺ���
		deallocate();  //vector��menber����
	}

	reference front(){ return *begin(); }
	reference back(){ return *(end() - 1); }
	void push_back(const T& x){
		if (finish != end_of_range){
			construct(finish, x);  //ȫ�ֺ���
			++finish;
		}
		else
			insert_aux(end(), x);
	}

	void pop_back(){
		--finish;
		destory(finish);  //ȫ�ֺ���
	}

	iterator erase(iterator position){
		if (position + 1 != end())
			copy(position + 1, finish, position);
		--finish;
		destory(finish);
		return position;
	}
	void resize(size_type new_size, const T& x){
		if (new_size < size())
			erase(begin() + new_size, end());
		else
			insert(end(), new_size() - size(), x);
	}

	void resize(type_size new_size){ resize(new_size, T()); }
	void clear(){ destory(begin(), end()); }





protected:
	iterator allocate_and_fill(size_type n, const T& x){
		iterator result = data_allocator::allocate(n);
		uninitialized_fil_n(result, n, x); //ȫ�ֺ���
		return result;
	}
};