#ifndef DEVICE_H
#define DEVICE_H
#include <string>

using namespace std;

class Device{
    public:
        Device();
        Device(const string & name);
        string getName() const;
    private:
        string _name;
};

#endif // DEVICE_H
