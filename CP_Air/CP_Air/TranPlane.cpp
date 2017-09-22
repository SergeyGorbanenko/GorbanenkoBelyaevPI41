#include "TranPlane.h"
#include <iostream>

using namespace std;

int TranPlane::getGruz()const { return gruz; }
void TranPlane::setGruz(const int &Gruz)
{
	gruz = Gruz;
}

//Переопределенный метод
void TranPlane::setWeight(const int &Weight)
{
	weight = gruz + Weight;
}

TranPlane::TranPlane(const int a, const int b, const int c, const int d, const int e) : Plane(a, b, c, d)
{
	setGruz(e);
}

TranPlane::TranPlane(const TranPlane &a) : Plane(a)
{
	setGruz(a.getGruz());
}

TranPlane::TranPlane() : Plane()
{
	setGruz(0);
}
TranPlane::~TranPlane() {}

