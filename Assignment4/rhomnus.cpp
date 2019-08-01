#include"rhombus.h"
/*
* the constructor which initializes the rhombus object.

* @param  side,side of the rhombus

* @param  description,description about the object type.

* @param  name,name of the object .

*/
rhombus::rhombus(double side, string description,string name)
{
	int side1 = side;
	if (side1% 2 == 0)
	{
		side = side+1;
	}
	this->side=side;
	shape::setname(name);
	shape::setdescription(description);
}
/*
this function calculates the geometric area

@return the calculated geometric area.
*/
double rhombus::geometricarea()
{
	return (side*side)/2;
}
/*
this function calculates the screen area

@return the calculated screen area.
*/
double rhombus::screenarea()
{
	int n = side / 2;
	return (2*n*(n+1))+1;
}
/*
this function calculates the geometric perimeter

@return the calculated geometric perimeter.
*/
double rhombus::geometricperimeter()
{
	return 2*1.414*(side);
}
/*
this function calculates the screen perimeter

@return the calculated screen perimeter.
*/
double rhombus::screenperimeter()
{
	return 2 * (side - 1);
}
double rhombus::height()
{
	return side;
}
double rhombus::width()
{
	return side;
}
/*
* Draws specified shape on to the canvas.

* @param  canvass, the canvass on which to draw.

* @param  rows, the position in rows to start drawing.

* @param  columns, the position in columns to start drawing.

* @param  foreChar, the character used for drawing on the canvas.

* @param  backChar, the character used for drawing on the background.
*/
void rhombus::draw(Canvas& canvaas, int row , int column, char foreChar , char backChar )
{
	int n = side;
	n = n / 2 + 1;
	int i, j, k;
	int count = n-1;
	for (i = 1; i <= n; i++)
	{

		for (j = 0; j <i; j++)
			canvaas.put(row + i, column-j+count, foreChar);
		for (k = 1; k < i; k++)
			canvaas.put(row + i, column +k+count, foreChar);
	}
	int rowx = i-1;
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 0; j < (n-i); j++)	
		    canvaas.put(row + rowx + i, column + count-j, foreChar);
		for (k = 1; k < n-i; k++)
		    canvaas.put(row +rowx+ i, column + k + count, foreChar);
	}
}
/*Displays the objects info*/
void rhombus::toString()
{
	cout << "SHAPE INFORMATION" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << "Static type:" << "        " << typeid(this).name() << endl;
	cout << "Dynamic type:" << "       " << typeid(*this).name() << endl;
	cout << "Shape name:" << "         " << shape::getname() << endl;
	cout << "Description:" << "        " << shape::getdescription() << endl;
	cout << "id:" << "                 " << shape::getseqno() << endl;
	cout << "B. box width:" << "       " << side << endl;
	cout << "B. box height:" << "      " << side << endl;
	cout << "Scr area:" << "           " << screenarea() << endl;
	cout << "Geo area:" << "           " << geometricarea() << endl;
	cout << "scr perimeter" << "       " << screenperimeter() << endl;
	cout << "Geo perimeter" << "       " << geometricperimeter() << endl;
}
/*outputs the object by calling the toString method*/
ostream& operator<<(ostream& out, rhombus& shapeinfo)
{
	shapeinfo.toString();
	return out;

}