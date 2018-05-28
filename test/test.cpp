//
//  Father.cpp
//  cppTest
//
//  Created by ku on 2017/12/12.
//  Copyright  2017Äê edu.hust.kkk. All rights reserved.
//

//#include "Father.h"
#include <iostream>
#include <string>
using namespace std;



class Father
{

public:
    Father() {

    }
    Father(string name) {
        this->name = name;
    }
    string toString() {
       return toString(name);
    }
    string toString(string name) {
        this->name = name;
        return toString();
    }
protected:
    string name;
};

class Son : Father
{
public:
    Son(){}
    Son(string name) {
        this->name = name;
    }
    string toString() {
        return toString(name);
    }
    string toString(string name) {
        this->name = name;
        return toString();
    }
};

int main(int argc, const char * argv[]) {
	Son s("kaishi");
	cout<<s.toString()<<endl;
    return 0;

    
}
