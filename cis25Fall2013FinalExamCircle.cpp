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
    return FractionScottK(PI * ((*radiusPtr) * (*radiusPtr)));
}

CircleScottK::CircleScottK() {
    radiusPtr = new FractionScottK;
}

CircleScottK::CircleScottK(FractionScottK &r) {
    radiusPtr = new FractionScottK(r);
}

CircleScottK::CircleScottK(const CircleScottK &old) {
    radiusPtr = new FractionScottK(*old.radiusPtr);
}

CircleScottK::~CircleScottK() {
    delete radiusPtr;
}                 

CircleScottK& CircleScottK::operator=(const CircleScottK &arg) {
    if (this != &arg) {
	radiusPtr = new FractionScottK(*arg.radiusPtr);
    } 
    return *this;
}

void CircleScottK::print(ostream &os) {
    os << "Radius: " << *radiusPtr << " Area: " << 
	getArea() << endl;
}
