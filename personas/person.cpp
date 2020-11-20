#include "person.h"

Person::Person()
{
    name=" ";
    age=0;
}

Person::Person(string a, int b)
{
    name=a;
    age=b;
}

Person::Person(const Person &p)
{
    name=p.name;
    age=p.age;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &name)
{
    this->name = name;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int age)
{
    this->age = age;
}

//
Person & Person::operator=(const Person & P)
{
    name = P.name;
    age = P.age;
    return *this;
}
