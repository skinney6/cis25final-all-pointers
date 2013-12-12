// FILE  Display Utility
/**
 * Program name: cis25Fall2013FinalExamDisplayUtility.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include "cis25Fall2013FinalExamDisplayUtility.h"
#include "cis25Fall2013FinalExamBox.h"
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamRectangle.h"
#include "cis25Fall2013FinalExamCircle.h"
#include "cis25Fall2013FinalExamCylinder.h"
#include "cis25Fall2013FinalExamShape.h"

void displayVolumeScottK(ShapeScottK *shapeAry[], int size) {
    ShapeScottK *temp = NULL;

    // sort smallest to largest
    for (int i = 0; i < size; i++) {
	for (int j = 1; j < size - 1; j++) {
	    if ((*(shapeAry + i))->getVol() > (*(shapeAry + j))->getVol()) {
		temp = *(shapeAry + j);
		*(shapeAry + j) = *(shapeAry + i);
		*(shapeAry + i) = temp;
	    }
	}
    }
    for (int i = 0; i < size; i++)
	cout << *(*(shapeAry + i))  << endl;    
}

void displayVolumeScottK(ShapeScottK *shapeAry[], int start, int stop) {
    // sort smallest to largest (ascending). ONLY works for 3 elements!
    ShapeScottK *temp = NULL;
    if ((*(shapeAry + start))->getVol() > 
	(*(shapeAry + (start + 1)))->getVol()) {
	temp = *(shapeAry + (start + 1));
	*(shapeAry + (start + 1)) = *(shapeAry + start);
	*(shapeAry + start) = temp;
    }

    if ((*(shapeAry + start + 1))->getVol() > 
	(*(shapeAry + start + 2))->getVol()) {
	temp = *(shapeAry + (start + 2));
	*(shapeAry + (start + 2)) = *(shapeAry + (start + 1));
	*(shapeAry + (start + 1)) = temp;
    }

    if ((*(shapeAry + start))->getVol() > 
	(*(shapeAry + (start + 1)))->getVol()) {
	temp = *(shapeAry + (start + 1));
	*(shapeAry + (start + 1)) = *(shapeAry + start);
	*(shapeAry + start) = temp;
    }
    
    for (int i = start; i < stop; i++)
	cout << *(*(shapeAry + i))  << endl;
}

void displayAreaScottK(ShapeScottK *shapeAry[], int start, int stop) {
    // sort smallest to largest (ascending). ONLY works for 3 elements!
    ShapeScottK *temp = NULL;
    if ((*(shapeAry + start))->getArea() > 
	(*(shapeAry + (start + 1)))->getArea()) {
	temp = *(shapeAry + (start + 1));
	*(shapeAry + (start + 1)) = *(shapeAry + start);
	*(shapeAry + start) = temp;
    }

    if ((*(shapeAry + start + 1))->getArea() > 
	(*(shapeAry + start + 2))->getArea()) {
	temp = *(shapeAry + (start + 2));
	*(shapeAry + (start + 2)) = *(shapeAry + (start + 1));
	*(shapeAry + (start + 1)) = temp;
    }

    if ((*(shapeAry + start))->getArea() > 
	(*(shapeAry + (start + 1)))->getArea()) {
	temp = *(shapeAry + (start + 1));
	*(shapeAry + (start + 1)) = *(shapeAry + start);
	*(shapeAry + start) = temp;
    }

    for (int i = start; i < stop; i++)
	cout << *(*(shapeAry + i))  << endl;
}

void getSmallestVolumeScottK(ShapeScottK *shapeAry[], int size) {
    ShapeScottK *temp = NULL;

    // sort smallest to largest
    for (int i = 0; i < size; i++) {
	for (int j = 1; j < size - 1; j++) {
	    if ((*(shapeAry + i))->getVol() > (*(shapeAry + j))->getVol()) {
		temp = *(shapeAry + j);
		*(shapeAry + j) = *(shapeAry + i);
		*(shapeAry + i) = temp;
	    }
	}
    }
    cout << (*(*shapeAry)) << endl;
}

void getSmallestAreaScottK(ShapeScottK *shapeAry[], int size) {
    ShapeScottK *temp = NULL;

    // sort smallest to largest
    for (int i = 0; i < size; i++) {
	for (int j = 1; j < size - 1; j++) {
	    if ((*(shapeAry + i))->getArea() > (*(shapeAry + j))->getArea()) {
		temp = *(shapeAry + j);
		*(shapeAry + j) = *(shapeAry + i);
		*(shapeAry + i) = temp;
	    }
	}
    }
    cout << (*(*shapeAry)) << endl;
}

void printAry(ShapeScottK *ary[], int size) {
    for (int j = 0; j < size; j++) {
	cout << *(*(ary + j)) << endl;
    }
}




