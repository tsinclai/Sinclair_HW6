/*
All programming assignments for the remainder of this course must begin with
a variation of the following four lines:

Program Name: Shape Math
Purpose: Implement a program to calculate the properties of various
  geometric shapes.
Author: Tabitha Sinclair
Date Last Modified: 01-31-19
*/

#include <iostream>
using namespace std;

#define _USE_MATH_DEFINES
#include <cmath>

int main () {
  double circleRadius =0;
  double shapeArea =0;
  cout << "Welcome to the Shape Calculator" << endl;
  cout << "Enter the circleRadius: ";
  cin >> circleRadius;
  shapeArea = M_PI * circleRadius * circleRadius;
  cout << "The area of the circle is: " << shapeArea << endl;
  return 0;



}
