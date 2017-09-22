#pragma once
#include "Plane.h"
#include <string>

using namespace std;

//Производный класс - Военный Самолёт
class TranPlane : public Plane
{
private:
	int gruz;
public:
	TranPlane();
	TranPlane(const TranPlane &a);												//Конструктор копирования
	TranPlane(const int a, const int b, const int c, const int d, const int e);	//Конструктор инициализирования

	int getGruz()const;					//возвращает вес груза
	virtual void setGruz(const int &); //устанавливает вес груза

	//Переопределенный метод
	virtual void setWeight(const int &);

	virtual ~TranPlane();

};

