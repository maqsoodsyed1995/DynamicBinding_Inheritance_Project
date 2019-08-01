#pragma once
#include<iostream>
#include<vector>
using namespace std;
/*
The canvas class has  private varaibles ,a vector for canvas,heightof canvas
for the height of canvas and width of canvas
the constructor creaters the canvas with the specified number of rows and columns.
the remaining functions help in achieving the operations for the canvas class.
*/
class Canvas
{
private:
	vector<vector<char>> can;
	int heightofcanvas;
	int widthofcanvas;
public:
	
	Canvas(int rows, int columns, char fillch = ' ');
	void put(int rows, int columns, char ch = '*');
	vector<char>& operator[](int);
	int getheight();
	int getwidth();
	bool inbounds(int, int);
	void clear(char fill = ' ');
	friend ostream& operator<<(ostream&, Canvas&);
};