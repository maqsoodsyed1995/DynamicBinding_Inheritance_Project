#pragma once
#include"Isoceles.h"
/*
The oblique class has a private heightob for the height of the oblique traingle.
the oblique class is inherited from iscoleses class which is inturn inherited from 
the shape class.
*/
class oblique : public isoceles
{
private:
	double heightob;
public:
	oblique(double base, string description = "Class oblique", string  name = "oblique") ;
	double geometricarea() override;
	double geometricperimeter() override;
	double screenarea() override;
	double screenperimeter() override;
	void draw(Canvas&, int, int, char foreChar = '*', char backChar = ' ') override;
	double height() override;
	double width() override;
	void toString() override;
	friend ostream& operator<<(ostream&, oblique&);
};