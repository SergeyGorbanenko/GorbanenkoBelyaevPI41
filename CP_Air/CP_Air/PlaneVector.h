#pragma once
#include "Plane.h"
#include <string>
#include <vector>

using namespace std;

//
class PlaneVector : public vector < Plane * >
{
private:
	string fname;
public:
	PlaneVector(const string &aname) : vector<Plane*>() { fname = aname; };
	
	virtual string goTypePlanes(unsigned int i);	//возвращает тип
	virtual int goTimeFly(unsigned int i);			//возвращает время полета
	virtual string goSost(unsigned int i);			//возвращает состояние полета
	virtual int goGruz(unsigned int i);				//возвращает массу груза
	virtual int goSeats(unsigned int i);			//возвращает количество пассажиров

	virtual void goFly(unsigned int i);				//задает рандомные массу груза или количество пассажиров 
	virtual void goSetTime(unsigned int i);			//задает рандомное время полета

	virtual void goMinusTime(unsigned int i);		//задает время полета с учетом -1

	virtual ~PlaneVector();
};