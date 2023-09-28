#ifndef cylinder_h
#define cylinder_h
#include <iostream>
using namespace std;
class Cylinder
{
    private:
    double radius;
    double height;
    double volume;

    public:
    Cylinder();
    Cylinder(double radius, double height);
    void accept();
    void print();
    void Volume();
    double getradius();
    void setradius(double radius);
    double getheight();
    void setheight(double height);
    double getvolume();
       
};
#endif