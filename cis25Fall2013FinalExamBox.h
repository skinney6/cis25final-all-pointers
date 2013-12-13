// FILE Box Class Specification File
/**
 * Program name: cis25Fall2013FinalExamBox.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef FINALBOX_H
#define FINALBOX_H
#include "cis25Fall2013FinalExamRectangle.h"
#include "cis25Fall2013FinalExamFraction.h"

class BoxScottK : public RectangleScottK {
private:
    FractionScottK *heightPtr;
public:
    BoxScottK();      
    BoxScottK(FractionScottK &);      
    BoxScottK(RectangleScottK &, FractionScottK &); 
    ~BoxScottK();  

    FractionScottK getArea(void) const;
    FractionScottK getVol(void) const;
    void print(ostream &);

    BoxScottK& operator=(const BoxScottK &);
};

#endif
