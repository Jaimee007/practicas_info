#ifndef POINT_H
#define POINT_H
using namespace std;

class Point
{
public:
    Point();
    Point(int x, int y);

    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);

    void display();
protected:
    int x;
    int y;
};

#endif // POINT_H
