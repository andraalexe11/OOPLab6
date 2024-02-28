//
// Created by Alexe Andra on 04.04.2023.
//
#include "dreptunghi.h"

Dreptunghi::Dreptunghi() {
    this -> css.setX(0);
    this -> css.setY(0);
    this -> cdj.setX(0);
    this -> cdj.setY(0);
}

Dreptunghi::Dreptunghi(Point a, Point b) {
    this -> css = a;
    this -> cdj = b;
}

Dreptunghi::~Dreptunghi() {

}

Point Dreptunghi::getCSS() {
    return this -> css;
}

Point Dreptunghi::getCDJ() {
    return this -> cdj;
}

Dreptunghi::Dreptunghi(const Dreptunghi &d) {
    this -> css = d.css;
    this -> cdj = d.cdj;
}

Dreptunghi &Dreptunghi::operator=(const Dreptunghi &d) {
    this -> css = d.css;
    this -> cdj = d.cdj;
    return *this;
}

void Dreptunghi::setCSS(Point p) {
    this -> css = p;
}

void Dreptunghi::setCDJ(Point p) {
    this -> cdj = p;
}

int Dreptunghi::getarie() {
    int l1 = 0, l2 = 0;
    l1 = this -> cdj.getX() - this -> css.getX();
    l2 = this -> css.getY() - this -> cdj.getY();
    return l1 * l2;
}

int Dreptunghi::getperimetru() {
    int l1 = 0, l2 = 0;
    l1 = this -> cdj.getX() - this -> css.getX();
    l2 = this -> css.getY() - this -> cdj.getY();
    return 2 * l1 + 2 * l2;
}

bool Dreptunghi::operator==(Dreptunghi &d) {
    return ((this -> css  == d.css) && (this -> cdj == d.cdj));
}

