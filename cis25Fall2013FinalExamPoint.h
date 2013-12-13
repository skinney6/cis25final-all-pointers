// FILE Point Class Specification File
/**
 * Program name: cis25Fall2013FinalExamPoint.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef FINALPOINT_H
#define FINALPOINT_H
#include "cis25Fall2013FinalExamFraction.h"

class PointScottK {
    friend ostream& operator<<(ostream &, const PointScottK &);
private:
    FractionScottK x;
    FractionScottK y;
public:
    PointScottK();
    PointScottK(FractionScottK &, FractionScottK &);
    PointScottK(const PointScottK &);
    ~PointScottK();
    PointScottK& operator=(const PointScottK &);
    FractionScottK getX();
    FractionScottK getY();

    FractionScottK area(const PointScottK &) const;
    void moveBy(const FractionScottK &, const FractionScottK &);
    void moveBy(int);
    void flipByX();
    void flipByY();
    void flipThroughOrigin();
    void update(FractionScottK &, FractionScottK &);
    bool operator==(const PointScottK &) const;
    bool operator!=(const PointScottK &) const;
    bool operator<=(const PointScottK &) const;
    bool operator<(const PointScottK &) const;
    bool operator>=(const PointScottK &) const;
    bool operator>(const PointScottK &) const;
};

#endif
