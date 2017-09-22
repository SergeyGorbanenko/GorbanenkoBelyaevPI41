#pragma once

#include <string>

using namespace std;

// ������� ����� - ��������
class Airport
{
private:
	int place;			//������������ ���������
	int park;			//���������� �������
	int line;			//������

public:
	Airport();
	Airport(const Airport &a);				//����������� �����������
	Airport(int a, int b, int c);			//����������� �����������������
	
	
	
	int getPlace()const;						//���������� ������������
	virtual void setPlace(const int &);			//������������� ���

	int getPark()const;						//���������� ���������� �������
	virtual void setPark(const int &);		//������������� ���������� �������

	int getLine()const;							//���������� ��������� ������
	virtual void setLine(const int &);			//������������� ��������� ������

	virtual ~Airport();
};

