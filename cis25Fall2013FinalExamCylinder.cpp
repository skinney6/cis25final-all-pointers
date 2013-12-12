// FILE Cylinder Implementation File (member function definitions)
/**
 * Program name: cis25Fall2013FinalExamCylinder.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamCylinder.h"
#include "cis25Fall2013FinalExamCircle.h"
#include "cis25Fall2013FinalExamFraction.h"

void CylinderScottK::print(ostream &os) {
    os << "Base Circle: Radius " << CircleScottK::getR() << " Area " <<
	CircleScottK::getArea() << endl;
    os << "Cylinder Area: " << CylinderScottK::getArea() << endl;
    os << "Cylinder Volume: " << CylinderScottK::getVol() << endl;
}

FractionScottK CylinderScottK::getArea(void) const {
    return FractionScottK((CircleScottK::getArea() * 2) + 
			  (PI * CircleScottK::getR() * (*heightPtr)) * 2);
}

FractionScottK CylinderScottK::getVol(void) const {
    return FractionScottK(PI * (getR() * 2) * (*heightPtr));
}

CylinderScottK::CylinderScottK(CircleScottK &base, FractionScottK &h) 
    : CircleScottK(base) {
   if (h >= 0)
       heightPtr = new FractionScottK(h);
   else
       heightPtr = new FractionScottK;
}

CylinderScottK::~CylinderScottK() {
    delete heightPtr;
}                 

CylinderScottK::CylinderScottK() {
    heightPtr = new FractionScottK;
}                 
