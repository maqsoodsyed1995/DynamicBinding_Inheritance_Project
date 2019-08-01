#include"Shape.h"
shape::shape()
{
	static int serialno = 1;
	seqno = serialno;
	serialno++;
}
int shape::getseqno()
{
	return seqno;
}
string shape::getdescription()
{
	return description;
}
string shape::getname()
{
	return name;
}
void shape::setdescription(string des)
{
	description = des;
}
void shape::setname(string nam)
{
	name = nam;
}
void shape::toString()
{

}
double shape::geometricarea()
{
	return 0.0;
}
double shape::geometricperimeter()
{
	return 0.0;
 }
double shape::screenarea()
{
	return 0.0;
 }
double shape::screenperimeter()
{
	return 0.0;
}

double shape::height()
{
	return 0.0;
 }
double shape::width()
{
	return 0.0;
 }