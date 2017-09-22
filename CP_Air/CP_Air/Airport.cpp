#include "Airport.h"
#include <iostream>
#include "Attrib.h"
using namespace std;

int Airport::getPlace()const { return place; }
void Airport::setPlace(const int &Place)
{
	place = Place;
}

int Airport::getPark()const { return park; }
void Airport::setPark(const int &Park)
{
	park = Park;
}

int Airport::getLine()const { return line; }
void Airport::setLine(const int &Line)
{
	/*if (Line >= 1 || Line < 0)
		line = FALSE;
	if (Line == 0)
		line = TRUE;*/
	line = Line;
}


Airport::Airport(int a, int b, int c)
{
	setPlace(a);
	setPark(b);
	setLine(c);
}
Airport::Airport(const Airport &a)
{
	setPlace(a.getPlace());
	setPark(a.getPark());
	setLine(a.getLine());
}

Airport::Airport()
{
	setPark(0);
	setPlace(0);
	setLine(0);
}
Airport::~Airport() {}

