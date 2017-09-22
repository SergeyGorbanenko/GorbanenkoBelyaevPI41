#include "PlaneVector.h"
#include "Plane.h"
#include "WarPlane.h"
#include "TranPlane.h"
#include <iostream>
using namespace std;

PlaneVector::~PlaneVector()
{
	//Удаление объектов
	for (unsigned int i = 0; i<size(); i++) delete (*this)[i];
};

string PlaneVector::goTypePlanes(unsigned int i)
{
	Plane *w;
	WarPlane *c;
	TranPlane *b;
	w = (*this)[i];
	c = dynamic_cast<WarPlane*>(w);
	if (c)
		return "Пассажир";
	b = dynamic_cast<TranPlane*>(w);
	if (b)
		return "Грузовой";	
};

int PlaneVector::goTimeFly(unsigned int i)
{
	Plane *w;
	w = (*this)[i];
	return w->getTime_fly();
}

string PlaneVector::goSost(unsigned int i)
{
	Plane *w;
	w = (*this)[i];
	if (w->getTime_fly() > 0)
		return "В полете";
	else
		return "На стоянке";
}

int PlaneVector::goGruz(unsigned int i)
{
	Plane *w;
	TranPlane *b;
	w = (*this)[i];
	b = dynamic_cast<TranPlane*>(w);
	if (b) {
		return b->getGruz();
	}
	else
		return 0;
}

int PlaneVector::goSeats(unsigned int i)
{
	Plane *w;
	WarPlane *b;
	w = (*this)[i];
	b = dynamic_cast<WarPlane*>(w);
	if (b) {
		return b->getSeats();
	}
	else
		return 0;
}

void PlaneVector::goFly(unsigned int i)
{
	Plane *w;
	WarPlane *c;
	TranPlane *b;
	w = (*this)[i];
	c = dynamic_cast<WarPlane*>(w);
	if (c)
		c->setSeats(50 + rand() % 20);
	b = dynamic_cast<TranPlane*>(w);
	if (b)
		b->setGruz(500 + rand() % 500);
}

void PlaneVector::goSetTime(unsigned int i)
{
	Plane *w;
	w = (*this)[i];
	w->setTime_fly(10 + rand() % 20);
}
void PlaneVector::goMinusTime(unsigned int i)
{
	Plane *w;
	w = (*this)[i];
	w->setTime_fly(w->getTime_fly() - 1);
}