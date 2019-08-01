#include"oblique.h"
/*
* the constructor which initializes the oblique object.

* @param  base,base of the oblique.

* @param  description,description about the object type.
* @param  name,name of the object .

*/
oblique::oblique(double base,  string description,string name  ) {
	int base1 = base;
	if (base1 % 2 == 0)
	{
		base = base + 1;
	}
	heightob = (base+1)/2;
	shape::setname(name);
	shape::setdescription(description);
	isoceles::setbase(base);
};
/*
this function calculates the geometric area

@return the calculated geometric area.
*/
double oblique::geometricarea()
{
	return (isoceles::getbase()*heightob) / 2;
}
/*
this function calculates the screen area

@return the calculated screen area.
*/
double oblique::screenarea()
{
	
	return heightob*heightob;
}
/*
this function calculates the geometric perimeter

@return the calculated geometric perimeter.
*/
double oblique::geometricperimeter()
{
	double b = isoceles::getbase();
	return b+2*(sqrt(0.25*(b*b)+heightob*heightob));
}
/*
this function calculates the screen perimeter

@return the calculated screen perimeter.
*/
double oblique::screenperimeter()
{
	return 4 * (heightob - 1);
}
double oblique::height()
{
	return heightob;
}
double oblique::width()
{
	return isoceles::getbase();
}
/*
* Draws specified shape on to the canvas.

* @param  canvass, the canvass on which to draw.

* @param  rows, the position in rows to start drawing.

* @param  columns, the position in columns to start drawing.

* @param  foreChar, the character used for drawing on the canvas.

* @param  backChar, the character used for drawing on the background.
*/
void oblique::draw(Canvas& canvaas, int rows, int columns, char foreChar, char backChar)
{
	
	int count = 0;
	for (int i = 0; i <= heightob; i++)
	{
		for (int j = (heightob - i); j > 0; j--)
			count++;

		for (int k = 1; k < (2 * i); k++)
			canvaas.put(rows + i, columns + count + k, foreChar);
		count = 0;
	}

}
/*Displays the objects info*/
void  oblique::toString()
{
	cout << "SHAPE INFORMATION" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << "Static type:"<<"        "<< typeid(this).name() << endl;
	cout << "Dynamic type:"<<"       " << typeid(*this).name() << endl;
	cout << "Shape name:"<<"         " << shape::getname() << endl;
	cout << "Description:"<<"        " << shape::getdescription() << endl;
	cout << "id:"<<"                 "<< shape::getseqno() << endl;
	cout << "B. box width:"<<"       " << isoceles::getbase() << endl;
	cout << "B. box height:"<<"      " << heightob << endl;
	cout << "Scr area:"<<"           " << screenarea() << endl;
	cout << "Geo area:"<<"           "  << geometricarea() << endl;
	cout << "scr perimeter"<<"       " << screenperimeter() << endl;
	cout << "Geo perimeter"<<"       " << geometricperimeter() << endl;

}
/*outputs the object by calling the toString method*/
 ostream& operator<<(ostream& out, oblique& shapeinfo)
{
	 shapeinfo.toString();
	 return out;
	
}