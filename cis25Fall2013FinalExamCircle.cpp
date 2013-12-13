// FILE Circle Implementation File (member function definitions)
/**
 * Program name: cis25Fall2013FinalExamCircle.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamCircle.h"
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamCylinder.h"

FractionScottK CircleScottK::getR(void) const {
    return *radiusPtr;
}

FractionScottK CircleScottK::getVol(void) const {
    return 0;
}

FractionScottK CircleScottK::getArea(void) const {
    return FractionScottK(((*radiusPtr) * (*radiusPtr)) * PI);
}

CircleScottK::CircleScottK() {
    radiusPtr = new FractionScottK;
    centerPtr = new PointScottK;
}

CircleScottK::CircleScottK(PointScottK &c, FractionScottK &r) {
    radiusPtr = new FractionScottK(r);
    centerPtr = new PointScottK(c);
}

CircleScottK::CircleScottK(const CircleScottK &old) {
    radiusPtr = new FractionScottK(*old.radiusPtr);
    centerPtr = new PointScottK(*old.centerPtr);
}

CircleScottK::~CircleScottK() {
    delete radiusPtr;
    delete centerPtr;
}                 

CircleScottK& CircleScottK::operator=(const CircleScottK &arg) {
    if (this != &arg) {
	radiusPtr = new FractionScottK(*arg.radiusPtr);
	centerPtr = new PointScottK(*arg.centerPtr);
    } 
    return *this;
}

void CircleScottK::printCir(void) {
    cout << "Base circle:\n" << "Center: " << *centerPtr 
       << " Radius: " << *radiusPtr << endl;
}

void CircleScottK::print(ostream &os) {
    os << "Circle\n:Center: " << *centerPtr << " Radius: " << *radiusPtr 
       << " Area: " << getArea() << endl;
}
