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
	Distance topIndex, T value){  //����
	Distance parent = (holeIndex - 1) / 2;//�ҳ����ڵ�
	while (holeIndex > topIndex &&*(first + parent) < value){
		*(first + holeIndex) = *(first + parent); //��ֵΪ��ֵ
		holeIndex = parent; //��������
		parent = (holeIndex - 1) / 2; //�¶��ĸ��ڵ�
	}
	*(first + holeIndex) = value;
}


// �����@�� __adjust_heap() �����Sָ������С���^�˜ʡ�
template <class RandomAccessIterator, class Distance, class T>
void __adjust_heap(RandomAccessIterator first, Distance holeIndex,
	Distance len, T value) {
	Distance topIndex = holeIndex;
	Distance secondChild = 2 * holeIndex + 2;	// �����c֮���ӹ��c
	while (secondChild < len) {
		// ���^�����c֮���҃ɂ���ֵ��Ȼ���� secondChild �����^���ӹ��c��
		if (*(first + secondChild) < *(first + (secondChild - 1)))
			secondChild--;
		// Percolate down�����^����ֵ�鶴ֵ�����̖�������^���ӹ��c̎��
		*(first + holeIndex) = *(first + secondChild);
		holeIndex = secondChild;
		// �ҳ��¶����c�����ӹ��c
		secondChild = 2 * (secondChild + 1);
	}
	if (secondChild == len) { // �]�����ӹ��c��ֻ�����ӹ��c
		// Percolate down��������ֵ�鶴ֵ�����̖���������ӹ��c̎��
		*(first + holeIndex) = *(first + (secondChild - 1));
		holeIndex = secondChild - 1;
	}
	// �����{��ֵ����Ŀǰ�Ķ�̖�ȡ�ע�⣬�˕r�϶��M��������ԡ�
	// �����֮Ҋ������ֱ�ӸĞ� *(first + holeIndex) = value; ��ԓ���ԡ�
	//__push_heap(first, holeIndex, topIndex, value);
	*(first + holeIndex) = value;
}


//make_heap

// �� [first,last) ���О�һ�� heap��
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
		if (parent == 0) return; //������ڵ㣬����
		parent--;
	}
}










#endif //_MY_ALGORITHM_HEAP_
