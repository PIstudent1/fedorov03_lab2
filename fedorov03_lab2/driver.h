#pragma once
#include "date.h"
#define N 15

class driver { //����� ��������
private:
	char *name; //���
	char *lastname; //�������
	date birthdate; //������������� ��������� ����
public:
	void input(); //����� �����
	void output(); //����� ������ 
	void init(const char name1[N], const char lastname1[N], date birthdate1); //����� ��������
};