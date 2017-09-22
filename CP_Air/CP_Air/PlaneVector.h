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
	
	virtual string goTypePlanes(unsigned int i);	//���������� ���
	virtual int goTimeFly(unsigned int i);			//���������� ����� ������
	virtual string goSost(unsigned int i);			//���������� ��������� ������
	virtual int goGruz(unsigned int i);				//���������� ����� �����
	virtual int goSeats(unsigned int i);			//���������� ���������� ����������

	virtual void goFly(unsigned int i);				//������ ��������� ����� ����� ��� ���������� ���������� 
	virtual void goSetTime(unsigned int i);			//������ ��������� ����� ������

	virtual void goMinusTime(unsigned int i);		//������ ����� ������ � ������ -1

	virtual ~PlaneVector();
};