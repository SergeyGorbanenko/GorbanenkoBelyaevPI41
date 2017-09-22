#pragma once

#include <string>

using namespace std;

// Ѕазовый класс - —амолет
class Plane
{
private:
	int speed;			//—корость самолета
	int time_fly;		//¬рем€ полета самолета
	int time_service;	//¬рем€ обслуживани€ самолета
protected:
	int weight;			//¬ес самолета
public:
	Plane();
	Plane(const Plane &a);				// онструктор копировани€
	Plane(int a, int b, int c, int d);	// онструктор инициализировани€
	int getWeight()const;						//возвращает вес
	virtual void setWeight(const int &);		//устанавливает вес

	int getSpeed()const;						//возвращает скорость
	virtual void setSpeed(const int &);			//устанавливает скорость

	int getTime_fly()const;							//возвращает врем€ полета
	virtual void setTime_fly(const int &);			//устанавливает врем€ полета

	int getTime_service()const;								//возвращает врем€ обслуживани€
	virtual void setTime_service(const int &);				// устанавливает врем€ обслуживани€

	virtual ~Plane();
};

