// FILE Utility (menus) Stand-alone function definitions
/**
 * Program name: cis25Fall2013FinalExamUtility.cpp
 * Discussion :  Final
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "cis25Fall2013FinalExamUtility.h"
#include "cis25Fall2013FinalExamFraction.h"
#include "cis25Fall2013FinalExamRectangle.h"
#include "cis25Fall2013FinalExamCircle.h"
#include "cis25Fall2013FinalExamBox.h"
#include "cis25Fall2013FinalExamCylinder.h"
#include "cis25Fall2013FinalExamDisplayUtility.h"

void menu(void) {
    // Fractions
    cout << "Starting at Line 50:" << endl;
    FractionScottK *fPtrA =
	new FractionScottK(4, 1);
    cout << *fPtrA << endl;

    FractionScottK *fPtrB =
	new FractionScottK(3, 1);
    cout << *fPtrB << endl;

    FractionScottK *fPtrC =
	new FractionScottK(2, 1);
    cout << *fPtrC << endl;

    FractionScottK *fPtrD =
	new FractionScottK(9, 1);
    cout << *fPtrD << endl;

    // Circles
    cout << "Starting at Line 1880: Circle" << endl;
    CircleScottK *cPtrA =
	new CircleScottK(*fPtrA);
    cout << *cPtrA << endl;

    CircleScottK *cPtrB =
	new CircleScottK(*fPtrB);
    cout << *cPtrB << endl;

    CircleScottK *cPtrC =
	new CircleScottK(*fPtrC);
    cout << *cPtrC << endl;

    // Cylinders
    cout << "Starting at Line 2680: Cylinder" << endl;
    CylinderScottK *cyPtrA =
	new CylinderScottK(*cPtrC, *fPtrC);
    cout << *cyPtrA << endl;

    CylinderScottK *cyPtrB =
	new CylinderScottK(*cPtrA, *fPtrA);
    cout << *cyPtrB << endl;

    CylinderScottK *cyPtrC =
	new CylinderScottK(*cPtrB, *fPtrB);
    cout << *cyPtrC << endl;

    // Rectangles
    cout << "Starting at Line 3300: Rectangle" << endl;
    RectangleScottK *rPtrA =
	new RectangleScottK(*fPtrA, *fPtrA);
    cout << *rPtrA << endl;

    RectangleScottK *rPtrB =
	new RectangleScottK(*fPtrB, *fPtrB);
    cout << *rPtrB << endl;

    RectangleScottK *rPtrC =
	new RectangleScottK(*fPtrC, *fPtrC);
    cout << *rPtrC << endl;

    // Box
    cout << "Starting at Line 3650: Box" << endl;
    BoxScottK *boxPtrA =
	new BoxScottK(*rPtrA, *fPtrD);
    cout << *boxPtrA << endl;

    BoxScottK *boxPtrB =
	new BoxScottK(*rPtrB, *fPtrD);
    cout << *boxPtrB << endl;

    BoxScottK *boxPtrC =
	new BoxScottK(*rPtrC, *fPtrD);
    cout << *boxPtrC << endl;


    const int shapeArySize = 12;
    
    ShapeScottK *shapeAry[shapeArySize] 
	= {cPtrA, cPtrB, cPtrC, cyPtrA, cyPtrB, cyPtrC, 
	   rPtrA, rPtrB, rPtrC, boxPtrA, boxPtrB, boxPtrC};

    // copy the array to maintain order
    ShapeScottK *shapeAryCopy[shapeArySize];
    for (int i = 0; i < shapeArySize; i++)
	*(shapeAryCopy + i) = *(shapeAry + i);
    
    cout << "**** Get Smallest Area: " << endl;
    getSmallestAreaScottK(shapeAryCopy, shapeArySize);

    // compares all ememets so the 2d objects will be smallest
    cout << "**** Get Smallest Volume: " << endl;
    getSmallestVolumeScottK(shapeAryCopy, shapeArySize);

    // recopy the master array now we can just sort elements
    // 0, 1 & 2 which we know are circles
    int start = 0;
    int stop = 3;
    for (int i = 0; i < shapeArySize; i++)
	*(shapeAryCopy + i) = *(shapeAry + i);
    cout << "**** Display Circles by area ascending: " << endl;
    displayAreaScottK(shapeAryCopy, start, stop);

    // recopy the master array now we can just sort elements
    // 6, 7 & 8  which we know are circles
    start = 6;
    stop = 9;
    for (int i = 0; i < shapeArySize; i++)
	*(shapeAryCopy + i) = *(shapeAry + i);
    cout << "**** Display rectangles by area ascending: " << endl;
    displayAreaScottK(shapeAryCopy, start, stop);

    // recopy the master array now we can just sort elements
    // 3, 4 & 5  which we know are circles
    start = 3;
    stop = 6;
    for (int i = 0; i < shapeArySize; i++)
	*(shapeAryCopy + i) = *(shapeAry + i);
    cout << "**** Display cylinders by volume ascending: " << endl;
    displayVolumeScottK(shapeAryCopy, start, stop);

    // recopy the master array now we can just sort elements
    // 9, 10 & 11 which we know are circles
    start = 9;
    stop = 12;
    for (int i = 0; i < shapeArySize; i++)
	*(shapeAryCopy + i) = *(shapeAry + i);
    cout << "**** Display boxes by volume ascending: " << endl;
    displayVolumeScottK(shapeAryCopy, start, stop);

    // recopy the master array now we can just sort them
    // all by volume
    stop = 12;
    for (int i = 0; i < shapeArySize; i++)
	*(shapeAryCopy + i) = *(shapeAry + i);
    cout << "**** Display all by volume ascending: " << endl;
    displayVolumeScottK(shapeAryCopy, stop);

    delete fPtrA;
    delete fPtrB;
    delete fPtrC;
    delete fPtrD;
    
    /*
    int option;
    do {
	printMenu();
	cout << "\nEnter the option ";
	cin >> option;
	switch (option) {
	case 1:
	    break;
	case 2:
	    break;
	case 3:
	    break;
	case 4:
	    break;
	case 5:
	    break;
	case 6:
	    break;
	case 7:
	    break;
	case 8:
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 8\n";
	}
    } while (option != 8);
    */
}

void printMenu(void) {
    cout << "***************************************************************"
	 << "\n*                         MENU                                *"
	 << "\n* 1. Get & Display Smallest Area (All Objects)                *"
	 << "\n* 2. Get & Display Smallest Volume (All Objects)              *"
	 << "\n* 3. Display Areas from Smallest to Largest (All Circles)     *"
	 << "\n* 4. Display Areas from Smallest to Largest (All Rectangles   *"
	 << "\n* 5. Display Volumes from Samllest to Largest (All Cylinders) *"
	 << "\n* 6. Display Volumes from Smallest to Largest (All Boxes)     *"
	 << "\n* 7. Display Volumes from Smallest to Largest (All Objects)   *"
	 << "\n* 8. Quit                                                     *"
	 << "\n***************************************************************";
}
