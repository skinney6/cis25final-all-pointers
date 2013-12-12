// FILE Shape (abstract) Class Specification File
/**
 * Program name: cis25Fall2013FinalExamShape.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7SHAPE_H
#define SCOTTKINNEYLAB7SHAPE_H
#include "cis25Fall2013FinalExamFraction.h"

class ShapeScottK {
private:

public:
    virtual FractionScottK getArea(void) const =0;
    virtual FractionScottK getVol(void) const =0;
    virtual void print(ostream &) =0;
};

inline ostream& operator<<(ostream &os, ShapeScottK &shape) {
    shape.print(os);
    return os;
}

#endif
