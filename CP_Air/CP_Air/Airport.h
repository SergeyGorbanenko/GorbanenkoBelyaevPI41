#pragma once

#include <string>

using namespace std;

// Базовый класс - Аэропорт
class Airport
{
private:
	int place;			//Расположение аэропорта
	int park;			//Количество стоянок
	int line;			//Полоса

public:
	Airport();
	Airport(const Airport &a);				//Конструктор копирования
	Airport(int a, int b, int c);			//Конструктор инициализирования
	
	
	
	int getPlace()const;						//возвращает расположение
	virtual void setPlace(const int &);			//устанавливает вес

	int getPark()const;						//возвращает Количество стоянок
	virtual void setPark(const int &);		//устанавливает Количество стоянок

	int getLine()const;							//возвращает состояние полосы
	virtual void setLine(const int &);			//устанавливает состояние полосы

	virtual ~Airport();
};

