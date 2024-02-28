//
// Created by Alexe Andra on 04.04.2023.
//

#include "point.h"

Point::Point() {
    this -> x = 0;
    this -> y = 0;
}

Point::Point(int v1, int v2) {
    this -> x = v1;
    this -> y = v2;
}

Point::Point(const Point &p) {
    this -> x = p.x;
    this -> y = p.y;
}

Point::~Point() {

}

Point &Point::operator=(const Point &p) {
    this -> x = p.x;
    this -> y = p.y;
    return *this;
}

void Point::setX(int v) {
    this -> x = v;
}

void Point::setY(int v) {
    this -> y = v;
}

int Point::getX() {
    return this -> x;
}

int Point::getY() {
    return this -> y;
}

bool Point::operator==(Point &p) {
    return ((this -> x == p.x) && (this -> y == p.y));
}


