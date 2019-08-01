#include"Shape.h"
#pragma once
/*
The isoceles class has a private variable base for the base of the triangles.
the isoceles is the derived class from the base class shape.
*/
class isoceles : public shape
{
private :
	double base;
public:
	isoceles();
	isoceles(double, string name, string description);
	double getbase();
	void setbase(double);
	double geometricarea() ;
	double geometricperimeter();
	double screenarea() ;
	double screenperimeter();
	void draw(Canvas&, int, int, char foreChar = '*', char backChar = ' ')=0;
	double height() ;
	double width();
	void toString() override;

};