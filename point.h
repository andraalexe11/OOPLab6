//
// Created by Alexe Andra on 04.04.2023.
//

#ifndef OOPLAB6_POINT_H
#define OOPLAB6_POINT_H

class Point{
private :
    int x;
    int y;
public:
    Point();
    Point(int v1, int v2);
    Point(const Point &p);
    ~Point();
    Point& operator = (const Point &p);
    void setX(int v);
    void setY(int v);
    int getX();
    int getY();
    bool operator==(Point& p);
};


#endif //OOPLAB6_POINT_H
