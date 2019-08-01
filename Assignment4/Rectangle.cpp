#include"rectangle.h"
#include"Shape.h"
/*
* the constructor which initializes the rectangle object.

* @param  width,width of the rectangle.

* @param  height,height of the rectangle.

* @param  description,description about the object type.

* @param  name,name of the object .

*/
Rectangle::Rectangle(double width, double height, string description, string name)
{
	this->heightvar = height;
	this->widthvar = width;
	shape::setname(name);
	shape::setdescription(description);
}
/*
this function calculates the geometric area

@return the calculated geometric area.
*/
double Rectangle::geometricarea()
{
	return heightvar*widthvar;
}
/*
this function calculates the screen area

@return the calculated screen area.
*/
double Rectangle::screenarea()
{
	return heightvar*widthvar;
}
/*
this function calculates the geometric perimeter

@return the calculated geometric perimeter.
*/
double Rectangle::geometricperimeter()
{
	return 2 * (heightvar + widthvar);
}
/*
this function calculates the screen perimeter

@return the calculated screen perimeter.
*/
double Rectangle::screenperimeter()
{
	return 2 * (heightvar + widthvar)-4;
}
double Rectangle::height()
{
	return heightvar;
}
double Rectangle::width()
{
	return widthvar;
}
/*
* Draws specified shape on to the canvas.

* @param  canvass, the canvass on which to draw.

* @param  rows, the position in rows to start drawing.

* @param  columns, the position in columns to start drawing.

* @param  foreChar, the character used for drawing on the canvas.

* @param  backChar, the character used for drawing on the background.
*/
void Rectangle::draw(Canvas& canvaas, int rows , int columns, char foreChar, char backChar)
{
	
	for (int r = 0; r < this->height(); r++)
	{
		for (int c = 0; c < this->width(); c++)
		{
			canvaas.put(rows + r+1, columns + c+1, foreChar);
		}
	}
}
/*Displays the objects info*/
void Rectangle::toString()

{

	cout << "SHAPE INFORMATION" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << "Static type:" << "        " << typeid(this).name() << endl;
	cout << "Dynamic type:" << "       " << typeid(*this).name() << endl;
	cout << "Shape name:" << "         " << shape::getname() << endl;
	cout << "Description:" << "        " << shape::getdescription() << endl;
	cout << "id:" << "                 " << shape::getseqno() << endl;
	cout << "B. box width:" << "       " << widthvar << endl;
	cout << "B. box height:" << "      " << heightvar << endl;
	cout << "Scr area:" << "           " << screenarea() << endl;
	cout << "Geo area:" << "           " << geometricarea() << endl;
	cout << "scr perimeter" << "       " << screenperimeter() << endl;
	cout << "Geo perimeter" << "       " << geometricperimeter() << endl;
	

}
/*outputs the object by calling the toString method*/
ostream& operator<<(ostream& out, Rectangle& shapeinfo)
{
	shapeinfo.toString();
	return out;

}