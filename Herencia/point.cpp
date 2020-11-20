#include <iostream>
#include "point.h"

Point::Point()
{
    x=0;
    y=0;
}

Point::Point(int x, int y){
    this->x=x;
    this->y=y;
}

int Point::getX() const{
    return x;
}
void Point::setX(int value){
    x=value;
}
int Point::getY() const{
    return y;
}
void Point::setY(int value){
    y=value;
}
void Point::display(){
    std::cout<<"Punto: ("<<x<<", "<<y<<")"<<std::endl;
}
