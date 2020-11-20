#ifndef PERSONLIST_H
#define PERSONLIST_H
#include <iostream>
#include <vector>
class PersonList
{
public:
    PersonList();
    PersonList(std::vector<PersonList> ,int _n);
    ~PersonList();
private:
    std::vector<PersonList> _v;
    int _n;
};

#endif // PERSONLIST_H
