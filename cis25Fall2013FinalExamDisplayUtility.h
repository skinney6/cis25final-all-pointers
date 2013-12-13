// FILE Display Utility Header File
/**
 * Program name: cis25Fall2013FinalExamDisplayUtility.h
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef DISPLAYUTILITY_H
#define DISPLAYUTILITY_H

#include "cis25Fall2013FinalExamShape.h"

void getSmallestAreaScottK(ShapeScottK *[], int);

void getSmallestVolumeScottK(ShapeScottK *[], int);

void displayAreaScottK(ShapeScottK *[], int , int);

// the second int is unused but allows me to overload
void displayVolumeScottK(ShapeScottK *[], int, int);

// this will sort them all by volume
void displayVolumeScottK(ShapeScottK *[], int);

void printAry(ShapeScottK *[], int);

#endif
