#include"Isoceles.h"
isoceles::isoceles() {

}
isoceles::isoceles(double base, string name, string description) {
	this->base = base;
	shape::setname(name);
	shape::setdescription(description);

};
double isoceles::getbase()
{
	return base;
}
void isoceles::setbase(double base)
{
	this->base = base;
}
void  isoceles::toString()
{

}
double isoceles::geometricarea()
{
	return 0.0;
}
double isoceles::geometricperimeter()
{
	return 0.0;
}
double isoceles::screenarea()
{
	return 0.0;
}
double isoceles::screenperimeter()
{
	return 0.0;
}

double isoceles::height()
{
	return 0.0;
}
double isoceles::width()
{
	return 0.0;
}