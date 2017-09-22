#pragma once
#include "Plane.h"
#include <string>

using namespace std;

//Производный класс - Военный Самолёт
class WarPlane : public Plane
{
private:
	int seats;
public:
	WarPlane();
	WarPlane(const WarPlane &a);												//Конструктор копирования
	WarPlane(const int a, const int b, const int c, const int d, const int e);	//Конструктор инициализирования

	int getSeats()const;				//возвращает кол-во сидений
	virtual void setSeats(const int &); //устанавливает кол-во сидений

	virtual ~WarPlane();

};

