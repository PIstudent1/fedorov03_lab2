#pragma once
#include "date.h"
#define N 15

class driver { //����� ��������
private:
	char name[N]; //���
	char lastname[N]; //�������
	date bd; //������������� ��������� ����
public:
	void input(); //����� �����
	void output(); //����� ������ 
	void create(char n[15], char ln[15], date birthdate); //����� ��������
};