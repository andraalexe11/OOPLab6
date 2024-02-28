//
// Created by Alexe Andra on 04.04.2023.
//

#ifndef OOPLAB6_DREPTUNGHI_H
#define OOPLAB6_DREPTUNGHI_H
#include "point.h"
class Dreptunghi{
private:
    Point css;
    Point cdj;
public:
    Dreptunghi();
    Dreptunghi(Point a, Point b);
    Dreptunghi(const Dreptunghi& d);
    ~Dreptunghi();
    Dreptunghi& operator=(const Dreptunghi& d);
    bool operator==(Dreptunghi& d);
    void setCSS(Point p);
    void setCDJ(Point p);
    Point getCSS();
    Point getCDJ();
    int getarie();
    int getperimetru();
};
#endif //OOPLAB6_DREPTUNGHI_H
