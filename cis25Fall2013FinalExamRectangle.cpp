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
#include "cis25Fall2013FinalExamPoint.h"
#include "cis25Fall2013FinalExamRectangle.h"

FractionScottK RectangleScottK::getVol(void) const {
    return 0;
}

FractionScottK RectangleScottK::getArea(void) const {
    return FractionScottK(ll->area(*ur));
}

void RectangleScottK::printPoints(void) {
    cout << "Lower left " << *ll << " upper right " << *ur;
}

void RectangleScottK::print(ostream &os) {
    os << "Rectangle:\n" << "Lower left " << *ll << " upper right " 
       << *ur << " Area " << ll->area(*ur) << endl;
}

RectangleScottK& RectangleScottK::operator=(const RectangleScottK &arg) {
    if (this != &arg) {
	ll = new PointScottK(*arg.ll);
	ur = new PointScottK(*arg.ur);
    } 
    return *this;
}

RectangleScottK::RectangleScottK(PointScottK &arg1, PointScottK &arg2) {
    if (arg1 < arg2) {
	ll = new PointScottK(arg2);
	ur = new PointScottK(arg1);
    } else {
	ll = new PointScottK(arg1);
	ur = new PointScottK(arg2);
    }    
}

RectangleScottK::RectangleScottK(const RectangleScottK &arg) {
    ll = new PointScottK(*arg.ll);
    ur = new PointScottK(*arg.ur);
}

RectangleScottK::RectangleScottK() {
    ll = new PointScottK;
    ur = new PointScottK;
}

RectangleScottK::~RectangleScottK() {
    delete ll;
    delete ur;
}
