#pragma once
#include"Shape.h"
#include<typeinfo>
/*
The Rectangle class has 2 private varaibles heightvar and widthvar,for the
height and width of the rectangle.
class rectangle gets inherited from the shape class.
*/
class Rectangle : public shape
{
private:
	double heightvar;
	double widthvar;
public:
	Rectangle(double, double, string description = "Class Rectangle", string name = "Rectangle");
	Rectangle(const Rectangle& s) :shape(s) {};
	void operator=(const Rectangle&);
	double geometricarea() override;
	double geometricperimeter() override;
	double screenarea() override;
	double screenperimeter() override;
	void draw(Canvas&, int, int, char foreChar = '*', char backChar = ' ') override;
	double height() override;
	double width() override;
	void toString();
	friend ostream& operator<<(ostream&, Rectangle&);
};