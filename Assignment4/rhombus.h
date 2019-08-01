#pragma once
#include"Shape.h"
/*
The rhombus class has a private variable side for the side of the rhombus
the rhombus class gets inherited from the shape class.

*/
class rhombus :public shape
{
private:
	double side;	
public:
	rhombus(double, string description = "Class Rectangle", string name = "Rectangle")  ;
	rhombus(const rhombus& s) :shape(s) {};
	void operator=(const rhombus&);
	double geometricarea() override;
	double geometricperimeter() override;
	double screenarea() override;
	double screenperimeter() override;
	void draw(Canvas&, int, int, char foreChar = '*', char backChar = ' ') override;
	double height() override;
	double width() override;
	void toString();
	friend ostream& operator<<(ostream&, rhombus&);
};