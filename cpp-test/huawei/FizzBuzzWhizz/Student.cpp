#include "Student.h"

Student::Student(_uint64_t num) : number(num){};

Student::~Student();

_uint64_t Studnet::get()
{
    return number;
}

void Studnet::set(_uint64_t new_number)
{
    number = new_number;
}

void say()
{
}
