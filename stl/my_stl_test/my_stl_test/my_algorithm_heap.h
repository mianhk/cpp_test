#ifndef _MY_ALGORITHM_HEAP_
#define _MY_ALGORITHM_HEAP_

typedef ptrdiff_t difference_type;
//typedef //TODO

//push_heap

template <class RandomAccessIterator>
inline void push_heap(RandomAccessIterator first,
	RandomAccessIterator last){
	__push_heap_aux(first, last, distance_type(first), value_type(first));
}


template <class RandomAccessIterator,class Distance,class T>
inline void __push_heap_aux(RandomAccessIterator first, RandomAccessIterator last, Distance*, T*){
	__push_heap(first, Distance(last - first) - 1, Distance(0), T(*(last - 1)));
}

template <class RandomAccessIterator,class Distance,class T>
void __push_heap(RandomAccessIterator first, Distance holeIndex,
	Distance topIndex, T value){  //上溯
	Distance parent = (holeIndex - 1) / 2;//找出父节点
	while (holeIndex > topIndex &&*(first + parent) < value){
		*(first + holeIndex) = *(first + parent); //另洞值为父值
		holeIndex = parent; //调整洞号
		parent = (holeIndex - 1) / 2; //新洞的父节点
	}
	*(first + holeIndex) = value;
}


// 以下這個 __adjust_heap() 不允許指定「大小比較標準」
template <class RandomAccessIterator, class Distance, class T>
void __adjust_heap(RandomAccessIterator first, Distance holeIndex,
	Distance len, T value) {
	Distance topIndex = holeIndex;
	Distance secondChild = 2 * holeIndex + 2;	// 洞節點之右子節點
	while (secondChild < len) {
		// 比較洞節點之左右兩個子值，然後以 secondChild 代表較大子節點。
		if (*(first + secondChild) < *(first + (secondChild - 1)))
			secondChild--;
		// Percolate down：令較大子值為洞值，再令洞號下移至較大子節點處。
		*(first + holeIndex) = *(first + secondChild);
		holeIndex = secondChild;
		// 找出新洞節點的右子節點
		secondChild = 2 * (secondChild + 1);
	}
	if (secondChild == len) { // 沒有右子節點，只有左子節點
		// Percolate down：令左子值為洞值，再令洞號下移至左子節點處。
		*(first + holeIndex) = *(first + (secondChild - 1));
		holeIndex = secondChild - 1;
	}
	// 將欲調整值填入目前的洞號內。注意，此時肯定滿足次序特性。
	// 依侯捷之見，下面直接改為 *(first + holeIndex) = value; 應該可以。
	//__push_heap(first, holeIndex, topIndex, value);
	*(first + holeIndex) = value;
}


//make_heap

// 將 [first,last) 排列為一個 heap。
template <class RandomAccessIterator>
inline void make_heap(RandomAccessIterator first, RandomAccessIterator last) {
	__make_heap(first, last, value_type(first), distance_type(first));
}


template <class RandomAccessIterator,class T,class Distance>
inline void __make_heap(RandomAccessIterator first, RandomAccessIterator last, T*, Distance*){
	if (last - first < 2)return;
	Distance len = last - first;

	Distance parent = (len - 2) / 2;

	while (ture){
		__adjust_heap(first, parent, len, T(*(first + parent) ));
		if (parent == 0) return; //走完根节点，结束
		parent--;
	}
}










#endif //_MY_ALGORITHM_HEAP_
