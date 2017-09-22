#pragma once
#include "Plane.h"
#include <string>

using namespace std;

//����������� ����� - ������� ������
class TranPlane : public Plane
{
private:
	int gruz;
public:
	TranPlane();
	TranPlane(const TranPlane &a);												//����������� �����������
	TranPlane(const int a, const int b, const int c, const int d, const int e);	//����������� �����������������

	int getGruz()const;					//���������� ��� �����
	virtual void setGruz(const int &); //������������� ��� �����

	//���������������� �����
	virtual void setWeight(const int &);

	virtual ~TranPlane();

};

