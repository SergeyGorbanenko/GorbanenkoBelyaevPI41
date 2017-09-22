#include "Plane.h"
#include <iostream>
using namespace std;

int Plane::getWeight()const { return weight; }
void Plane::setWeight(const int &Weight)
{
	weight = Weight;
}

int Plane::getSpeed()const { return speed; }
void Plane::setSpeed(const int &Speed)
{
	speed = Speed;
}

int Plane::getTime_fly()const { return time_fly; }
void Plane::setTime_fly(const int &Time_fly)
{
	time_fly = Time_fly;
}

int Plane::getTime_service()const { return time_service; }
void Plane::setTime_service(const int &Time_service)
{
	time_service = Time_service;
}
Plane::Plane(int a, int b, int c, int d)
{
	setWeight(a);
	setSpeed(b);
	setTime_fly(c);
	setTime_service(d);
}
Plane::Plane(const Plane &a)
{
	setWeight(a.getWeight());
	setSpeed(a.getSpeed());
	setTime_fly(a.getTime_fly());
	setTime_service(a.getTime_service());
}

Plane::Plane()
{
	setWeight(0);
	setSpeed(0);
	setTime_fly(0);
	setTime_service(0);
}
Plane::~Plane() {}

