// FILE Point Implementation File (member function definitions)
/**
 * Program name: cis25Fall2013FinalExamPoint.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamPoint.h"

using namespace std;

FractionScottK PointScottK::area(const PointScottK &arg) const {
    return FractionScottK((arg.x - x) * (arg.y - y));
}

bool PointScottK::operator==(const PointScottK &arg) const {
    if (x == arg.x && y == arg.y)
	return true;
    else 
	return false;
}
bool PointScottK::operator!=(const PointScottK &arg) const {
    return !(*this == arg);
}

bool PointScottK::operator<(const PointScottK &arg) const {
    if ((*this != arg) && (arg.x > x || arg.y > y))
	return true;
    else 
	return false;
}

bool PointScottK::operator>(const PointScottK &arg) const {
    if (*this != arg)
	return !(*this < arg);
    else 
	return false;
}

bool PointScottK::operator<=(const PointScottK &arg) const {
    if (*this < arg || *this == arg)
	return true;
    else 
	return false;
}

bool PointScottK::operator>=(const PointScottK &arg) const {
    if (*this == arg || *this > arg)
	return true;
    else 
	return false;
}

void PointScottK::flipByX(void) {
    x = -x;
}

void PointScottK::flipByY(void) {
    y = -y;
}

void PointScottK::flipThroughOrigin(void) {
    x = -x;
    y = -y;
}

void PointScottK::moveBy(const FractionScottK &delX, 
			 const FractionScottK &delY) {
    x += delX;
    y += delY;
}

void PointScottK::moveBy(int n) {
    x += FractionScottK(n);
    y += FractionScottK(n);
}

FractionScottK PointScottK::getX(void) {
    return x;
}

FractionScottK PointScottK::getY(void) {
    return y;
}

ostream& operator<<(ostream &os, const PointScottK &point) {
    os << "\(" << point.x << ", " << point.y << ")";
    return os;
}

PointScottK::PointScottK() {
    // default constructor
}

PointScottK::PointScottK(FractionScottK &x, FractionScottK &y) 
    : x(x), y(y) {
}

PointScottK::PointScottK(const PointScottK &old) {
    //copy constructor
    x = old.x;
    y = old.y;
}

PointScottK::~PointScottK() {
}                 

PointScottK& PointScottK::operator=(const PointScottK &arg) {
    if (this != &arg) {  // no self-assignemnet
	x = arg.x;
	y = arg.y;
    }
    return *this;
}

void PointScottK::update(FractionScottK &argX, FractionScottK &argY) {
    x = argX;
    y = argY;
}
