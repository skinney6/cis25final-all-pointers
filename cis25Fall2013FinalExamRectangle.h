// FILE Rectangle Class Specification File
/**
 * Program name: cis25Fall2013FinalExamRectangle.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB7RECTANGLE_H
#define SCOTTKINNEYLAB7RECTANGLE_H

#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamShape.h"

class RectangleScottK : public ShapeScottK {
protected:
    FractionScottK *lenPtr;
    FractionScottK *widPtr;
public:
    friend ostream& operator<<(ostream &, const RectangleScottK &);

    RectangleScottK();
    RectangleScottK(FractionScottK &, FractionScottK &);
    RectangleScottK(const RectangleScottK &);
    ~RectangleScottK();

    void print(ostream &);
    FractionScottK getLen(void) const;
    FractionScottK getWid(void) const;
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
    RectangleScottK& operator=(const RectangleScottK &);
};

inline ostream& operator<<(ostream &os, RectangleScottK &rect) {
    rect.print(os);
    return os;
}


#endif
