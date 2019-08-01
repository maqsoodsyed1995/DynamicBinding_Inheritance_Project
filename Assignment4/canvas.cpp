#include"canvas.h"
/*
* creates a canvas with the specified rows and columns.

* @param  rows ,number of rows in the canvas.

* @param  columns,number of columns in the canvas.

*/
Canvas::Canvas(int rows, int columns, char fillch)
{
	heightofcanvas = rows;
	widthofcanvas = columns;
	for (int i = 0; i < rows; i++)
	{
		vector<char> temp;
		for (int j = 0; j < columns; j++)
		{
			temp.push_back(fillch);
		}
		can.push_back(temp);
    }
	 
}
/*
* puts the character specified in the canvas.

* @param  row1 at which the character has to be placed.

* @param  column1 ,column at which the character has to be placed.

*/
void Canvas::put(int rows1,int columns1,char ch)
{
	if (rows1 > heightofcanvas-1 || columns1 > widthofcanvas-1)
	{
		return;
	}
	can[rows1][columns1] = ch;
}	
vector<char>& Canvas::operator[](int k)
{
	return can[k];
}
/*getter for height of the canvas*/
int Canvas::getheight()
{
	return heightofcanvas;
}
/*getter for width of the canvas*/
int Canvas::getwidth()
{
	return widthofcanvas;
}
/*checks whether given row and column are in bounds of the canvas*/
bool Canvas::inbounds(int rows , int columns)
{
	if ((rows <= heightofcanvas && rows >= 0) && (columns <= widthofcanvas && columns >= 0))
	{
		return true;
	}
	return false;
}
/*clears the canvas*/
void Canvas::clear(char fill)
{
	for (int i = 0; i<can.size(); i++)
		for (int j = 0; j < can[i].size(); j++)
		{
			can[i][j] = fill;
		}
}
/*Displays the canvas*/
ostream& operator<<(ostream& out, Canvas& c)
{
	for (int i = 0; i < c.can.size(); i++)
	{
		
			for (int j = 0; j < c.can[i].size(); j++)
			{
				cout << c.can[i][j];
			}
		cout << endl;
	}
	
	return out;
}