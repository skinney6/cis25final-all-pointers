// FILE Cylinder Class Specification File
/**
 * Program name: cis25Fall2013FinalExamCylinder.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7CYLINDER_H
#define SCOTTKINNEYLAB7CYLINDER_H
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamCircle.h"

class CylinderScottK : public CircleScottK {
private:
    FractionScottK *heightPtr;
public:
    CylinderScottK();
    CylinderScottK(CircleScottK &, FractionScottK &);
    ~CylinderScottK();

    void print(ostream &);
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
};

#endif
