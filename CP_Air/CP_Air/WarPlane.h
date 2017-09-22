#pragma once
#include "Plane.h"
#include <string>

using namespace std;

//����������� ����� - ������� ������
class WarPlane : public Plane
{
private:
	int seats;
public:
	WarPlane();
	WarPlane(const WarPlane &a);												//����������� �����������
	WarPlane(const int a, const int b, const int c, const int d, const int e);	//����������� �����������������

	int getSeats()const;				//���������� ���-�� �������
	virtual void setSeats(const int &); //������������� ���-�� �������

	virtual ~WarPlane();

};

