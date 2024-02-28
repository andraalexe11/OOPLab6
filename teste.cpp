//
// Created by Alexe Andra on 04.04.2023.
//
#include "point.h"
#include "dreptunghi.h"
#include <assert.h>
#include "teste.h"
#include "inout.h"
#include <iostream>
#include <vector>
using namespace std;
void testPoint()
{
    Point p1;
    assert(p1.getX() == 0);
    assert(p1.getY() == 0);
    Point p2(3, 7);
    assert(p2.getX() == 3);
    assert(p2.getY() == 7);
    p1 = p2;
    assert(p1.getX() == 3);
    assert(p1.getY() == 7);
    p2.setX(5);
    assert(p2.getX() == 5);
}

void testDreptunghi(){
    Dreptunghi d1;
    Point cssd1 = d1.getCSS();
    assert(cssd1.getX() == 0);
    assert(cssd1.getY() == 0);
    assert(d1.getCDJ().getX() == 0);
    assert(d1.getCDJ().getY() == 0);
    Point p1(2, 7);
    Point p2(10, 3);
    Dreptunghi d2(p1, p2);
    assert(d2.getCSS() == p1);
    assert(d2.getarie() == 32);
    assert(d2.getperimetru() == 24);
    Dreptunghi d3(p1, p2);
    assert(d2 == d3);
}
void testUtils(){
    vector<Dreptunghi> x;
    x.reserve(5);
    Point p1(5, 7);
    Point p2(10, 3);
    Dreptunghi d2(p1, p2);
    Point p3(2, 7);
    Point p4(10, 3);
    Dreptunghi d3(p3, p4);
    Point p5(2, 7);
    Point p6(10, 3);
    Dreptunghi d4(p5, p6);
    Point p7(2, 7);
    Point p8(10, 3);
    Dreptunghi d5(p7, p8);
    Point p9(3, 4);
    Point p10(10, 3);
    Dreptunghi d6(p9, p10);
    x.push_back(d2);
    x.push_back(d3);
    x.push_back(d4);
    x.push_back(d5);
    x.push_back(d6);
    int start = 0, stop = 0;
    entitati_egale(x, 5, start, stop);
    assert(start == 1);
    assert(stop == 4);


}