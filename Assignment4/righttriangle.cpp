#include"RightTriangle.h"
/*
* the constructor which initializes the righttriangle object.

* @param  base,base of the righttriangle.

* @param  description,description about the object type.

* @param  name,name of the object .

*/
righttriangle::righttriangle(double base, string description,string name) {

	heightrt = base ;
	shape::setname(name);
	shape::setdescription(description);
	isoceles::setbase(base);
};
/*
this function calculates the geometric area

@return the calculated geometric area.
*/
double righttriangle::geometricarea()
{
	return (heightrt*heightrt) / 2;
}
/*
this function calculates the screen area

@return the calculated screen area.
*/
double righttriangle::screenarea()
{
	
	return (heightrt*(heightrt+1))/2;
}
/*
this function calculates the geometric perimeter

@return the calculated geometric perimeter.
*/
double righttriangle::geometricperimeter()
{
	return (2 + sqrt(2))*heightrt;
}
/*
this function calculates the screen perimeter

@return the calculated screen perimeter.
*/
double righttriangle::screenperimeter()
{
	return 3*(heightrt-1);
}
/*getter for height*/
double righttriangle::height()
{
	return heightrt;
}
/*getter of width*/
double righttriangle::width()
{
	return heightrt;
}
/*
* Draws specified shape on to the canvas.

* @param  canvass, the canvass on which to draw.

* @param  rows, the position in rows to start drawing.

* @param  columns, the position in columns to start drawing.

* @param  foreChar, the character used for drawing on the canvas.

* @param  backChar, the character used for drawing on the background.
*/
void righttriangle::draw(Canvas& canvaas, int rows , int columns, char foreChar, char backChar)
{
	for (int i = 1; i <= heightrt; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			canvaas.put(rows+i,columns+j,foreChar);
		}
		
	}
}
/*Displays the objects info*/
void righttriangle::toString()
{
	cout << "SHAPE INFORMATION" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << "Static type:" << "        " << typeid(this).name() << endl;
	cout << "Dynamic type:" << "       " << typeid(*this).name() << endl;
	cout << "Shape name:" << "         " << shape::getname() << endl;
	cout << "Description:" << "        " << shape::getdescription() << endl;
	cout << "id:" << "                 " << shape::getseqno() << endl;
	cout << "B. box width:" << "       " << heightrt << endl;
	cout << "B. box height:" << "      " << heightrt << endl;
	cout << "Scr area:" << "           " << screenarea() << endl;
	cout << "Geo area:" << "           " << geometricarea() << endl;
	cout << "scr perimeter" << "       " << screenperimeter() << endl;
	cout << "Geo perimeter" << "       " << geometricperimeter() << endl;
	
}
/*outputs the object by calling the toString method*/
ostream& operator<<(ostream& out, righttriangle& shapeinfo)
{
	shapeinfo.toString();
	return out;

}