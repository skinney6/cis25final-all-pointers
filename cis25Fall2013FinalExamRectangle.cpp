// FILE Rectangle Implementation File (member function definitions)
/**
 * Program name: cis25Fall2013FinalExamRectangle.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamRectangle.h"

FractionScottK RectangleScottK::getVol(void) const {
    return 0;
}

FractionScottK RectangleScottK::getArea(void) const {
    return FractionScottK((*lenPtr) * (*widPtr));
}

FractionScottK RectangleScottK::getWid(void) const {
    return *widPtr;
}

FractionScottK RectangleScottK::getLen(void) const {
    return *lenPtr;
}

void RectangleScottK::print(ostream &os) {
    os << "Length " << *lenPtr << " Width " << *widPtr 
       << " Area " << getArea() << endl;
}

RectangleScottK& RectangleScottK::operator=(const RectangleScottK &arg) {
    if (this != &arg) {
	lenPtr = new FractionScottK(*arg.lenPtr);
	widPtr = new FractionScottK(*arg.widPtr);
    } 
    return *this;
}

RectangleScottK::RectangleScottK(FractionScottK &arg1, FractionScottK &arg2) {
    if (arg1 < arg2) {
	lenPtr = new FractionScottK(arg2);
	widPtr = new FractionScottK(arg1);
    } else {
	lenPtr = new FractionScottK(arg1);
	widPtr = new FractionScottK(arg2);
    }    
}

RectangleScottK::RectangleScottK(const RectangleScottK &arg) {
    lenPtr = new FractionScottK(*arg.lenPtr);
    widPtr = new FractionScottK(*arg.widPtr);
}

RectangleScottK::RectangleScottK() {
    lenPtr = new FractionScottK;
    widPtr = new FractionScottK;
}

RectangleScottK::~RectangleScottK() {
    delete lenPtr;
    delete widPtr;
}
