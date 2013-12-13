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
#include "cis25Fall2013FinalExamPoint.h"

class RectangleScottK : public ShapeScottK {
private:
    PointScottK *ll;
    PointScottK *ur;
public:
    friend ostream& operator<<(ostream &, const RectangleScottK &);

    RectangleScottK();
    RectangleScottK(PointScottK &, PointScottK &);
    RectangleScottK(const RectangleScottK &);
    ~RectangleScottK();

    void print(ostream &);
    void printPoints(void);
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
    RectangleScottK& operator=(const RectangleScottK &);
};

inline ostream& operator<<(ostream &os, RectangleScottK &rect) {
    rect.print(os);
    return os;
}


#endif
