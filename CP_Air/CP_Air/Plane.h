#pragma once

#include <string>

using namespace std;

// ������� ����� - �������
class Plane
{
private:
	int speed;			//�������� ��������
	int time_fly;		//����� ������ ��������
	int time_service;	//����� ������������ ��������
protected:
	int weight;			//��� ��������
public:
	Plane();
	Plane(const Plane &a);				//����������� �����������
	Plane(int a, int b, int c, int d);	//����������� �����������������
	int getWeight()const;						//���������� ���
	virtual void setWeight(const int &);		//������������� ���

	int getSpeed()const;						//���������� ��������
	virtual void setSpeed(const int &);			//������������� ��������

	int getTime_fly()const;							//���������� ����� ������
	virtual void setTime_fly(const int &);			//������������� ����� ������

	int getTime_service()const;								//���������� ����� ������������
	virtual void setTime_service(const int &);				// ������������� ����� ������������

	virtual ~Plane();
};

