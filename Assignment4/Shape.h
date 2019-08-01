#pragma once
#include<iostream>
#include <iomanip> 
#include<string>
#include"canvas.h"
using namespace std;
/*
The shapeclass has private varaibles seqno,name and description for the 
sequence number of the object ,name and description of the object respectively.
the shape class is the base class for all the classes in this project.
*/
class shape
{
private:
	int seqno;
	string name;
	string description;
public:
	shape();
	shape(const shape&);
	shape& operator=(const shape&);
	int getseqno();
	string getdescription();
	string getname();
	void setdescription(string);
	void setname(string);
	virtual void toString();
	virtual double geometricarea();
	virtual double geometricperimeter();
	virtual double screenarea();
	virtual double screenperimeter();
	virtual void draw(Canvas& ,int,int,char foreChar='*',char backChar=' ')=0;
	virtual double height();
	virtual double width();
};