/* FILE Fraction Class Specification File
 *
 * Program name: cis25Fall2013FinalExamFraction.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#ifndef SCOTTKINNEYLAB7FRACTION_H
#define SCOTTKINNEYLAB7FRACTION_H

class FractionScottK {
    friend ostream& operator<<(ostream &, const FractionScottK &);
private:
    int num;
    int denom;
public:
    FractionScottK();
    FractionScottK(int, int);
    FractionScottK(const FractionScottK &);
    FractionScottK(int);
    ~FractionScottK();
    int getNum() const;
    int getDenom() const;
    void setNum(int);
    void setDenom(int);
    FractionScottK operator+(const FractionScottK &) const;
    FractionScottK operator-(const FractionScottK &) const;
    FractionScottK operator*(const FractionScottK &) const;
    FractionScottK operator/(const FractionScottK &) const;
    FractionScottK& operator=(const FractionScottK &);
    FractionScottK& operator+=(const FractionScottK &);
    FractionScottK& operator-=(const FractionScottK &);
    FractionScottK& operator-(void);
    bool operator==(const FractionScottK &) const;
    bool operator!=(const FractionScottK &) const;
    bool operator<=(const FractionScottK &) const;
    bool operator<(const FractionScottK &) const;
    bool operator>=(const FractionScottK &) const;
    bool operator>(const FractionScottK &) const;
};
#endif
