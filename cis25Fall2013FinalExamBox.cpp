// FILE Box Implementation File (member function definitions)
/**
 * Program name: cis25Fall2013FinalExamBox.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamBox.h"
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamRectangle.h"

FractionScottK six(6, 1); //for a boxes six sides

void BoxScottK::print(ostream &os) {
    os << "Length " << RectangleScottK::getLen() << 
	" Width " << RectangleScottK::getWid() <<
	" Height " << *heightPtr << "\nArea "
       << (RectangleScottK::getLen()) *
	(RectangleScottK::getWid()) * six
       << "\nVolume " << (RectangleScottK::getLen()) *
	(RectangleScottK::getWid()) * (*heightPtr) << endl;
}

FractionScottK BoxScottK::getArea(void) const {
    return FractionScottK((RectangleScottK::getLen() * 
			   RectangleScottK::getWid()) * six);
}

FractionScottK BoxScottK::getVol(void) const {
    return FractionScottK((RectangleScottK::getLen()) * 
			  (RectangleScottK::getWid()) * (*heightPtr));
}

BoxScottK::BoxScottK() {
    heightPtr = new FractionScottK;
}

BoxScottK::~BoxScottK() {
    delete heightPtr;
}

BoxScottK::BoxScottK(RectangleScottK &rect, FractionScottK &h) 
    : RectangleScottK(rect) {
    if (h >= 0)
	heightPtr = new FractionScottK(h);
    else
	heightPtr = new FractionScottK;
}

BoxScottK& BoxScottK::operator=(const BoxScottK &arg) {
    if (this != &arg) {
	heightPtr = new FractionScottK(*arg.heightPtr);
    }
    return *this;
}
