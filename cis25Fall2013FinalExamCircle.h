// FILE Circle Class Specification File
/**
 * Program name: cis25Fall2013FinalExamCircle.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYFINALCIRCLE_H
#define SCOTTKINNEYFINALCIRCLE_H

#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamShape.h"

FractionScottK const PI(157/50);

class CircleScottK : public ShapeScottK {
private:
    FractionScottK *radiusPtr;
public:
    friend ostream& operator<<(ostream &, const CircleScottK &);
    CircleScottK();
    CircleScottK(FractionScottK &);
    CircleScottK(const CircleScottK &);       
    ~CircleScottK();
    CircleScottK& operator=(const CircleScottK &);
    
    void print(ostream &);
    FractionScottK getR(void) const;
    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
};


inline ostream& operator<<(ostream &os, CircleScottK &circle) {
    circle.print(os);
    return os;
}


#endif
