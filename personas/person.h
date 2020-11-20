#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(string a,int b);
    Person(const Person& c);
    /** Assign operator*/
    Person & operator=(const Person & P);
    string getName() const;
    void setName(const string &name);

    int getAge() const;
    void setAge(int value);

private:
    string name;
    int age;
};

#endif // PERSON_H
