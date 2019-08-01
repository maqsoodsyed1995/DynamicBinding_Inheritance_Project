
#pragma once
#include"Isoceles.h"
/*
The righttriangle class has a private varaible heightrt for the height of the right traingle
the class righttriangle gets inherited from the isoceles class which inturn gets inherited from the shape class.
*/
class righttriangle : public isoceles
{
private:
	double heightrt;
public:
	righttriangle(double base, string description = "Class righttriangle", string name = "right triangle") ;
	double geometricarea() override;
	double geometricperimeter() override;
	double screenarea() override;
	double screenperimeter() override;
	void draw(Canvas&, int, int, char foreChar = '*', char backChar = ' ') override;
	double height() override;
	double width() override;
	void toString();
	friend ostream& operator<<(ostream&, righttriangle&);
};