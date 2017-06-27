#include <iostream>
#include <vector>
using namespace std;
class Screen{
	friend Sales_data add(const Sales_data&,const Sales_data&);
	friend std::istream &read(std::istream&,Sales_data&);
	friend std::ostream &print(std::ostream&,const Sales_data&);
	friend void Window_mgr::clear(ScreenIndex);
	public:
		typedef std::string::size_type pos;
		Screen()=default;
		Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){
		}
		
		char get() const{
		return contents[cursor];} //��ʽ����
		inline char get(pos ht,pos wd) const; 
		Screen &move(pos r,pos c);
		void some_member() const;
		
		Screen &set(char);
		Screen &set(pos,pos,char);
		Screen &display(std::ostream &os){
			do_display(os);
			return *this;
		}
		const Screen &display(std::ostream &os) const{
			do_display(os);
			return *this;
		}
	private:
		pos cursor=0;
		pos height=0,width=0;
		std::string contents;
		mutable size_t access_ctr;
		void do_display(std::ostream &os) const{os<<contents;}
};


class Window_mgr{
	public:
		//������ÿ����Ļ�ı��
		using ScreenIndex=std::vector<Screen>::size_type;
		//���ձ�Ž��ƶ���Screen����Ϊ�հ�
		void clear(ScreenIndex); 
	private:
		std::vector<Screen> screens{Screen(24,80,' ')};
};


inline
Screen &Screen::move(pos r,pos c){
	pos row=r*width;
	cursor=row+c;
	return *this;
}
char Screen::get(pos ht,pos wd) const{
	pos row=r*width;
	return contents[row+c];
}

void Screen::some_member() const{
	++access_ctr;
}

inline Screen &Screen::set(char c){
	contents[cursor]=c;
	return *this;
}
inline Screen &Screen::set(pos r,pos col,char ch){
	contents[r*width+col]=ch;
	return *this;
}
//Sales_data �ӿڵķǳ�Ա��ɲ��ֵ����� 
Sales_data add(const Sales_data&,const Sales_data&);
std::istream &read(std::istream&,Sales_data&);
std::ostream &print(std::ostream&,const Sales_data&);


void Window_mgr::clear(ScreenIndex i){
	//s��һ��Screen�����ã�ָ����������յ��Ǹ���Ļ 
	Screen &s=screens[i];
	//��ѡ����Screen����Ϊ�հ�
	s.contents=string(s.height*s.width,' '); 
}

int main(){
	Screen screen();
	return 0;
}
