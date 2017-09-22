#include "WarPlane.h"
#include <iostream>

using namespace std;

int WarPlane::getSeats()const { return seats; }
void WarPlane::setSeats(const int &Seats)
{
	seats = Seats;
}


WarPlane::WarPlane(const int a, const int b, const int c, const int d, const int e) : Plane(a, b, c, d)
{
	setSeats(e);
}

WarPlane::WarPlane(const WarPlane &a) : Plane(a)
{
	setSeats(a.getSeats());
}

WarPlane::WarPlane() : Plane()
{
	setSeats(0);
}
WarPlane::~WarPlane() {}

