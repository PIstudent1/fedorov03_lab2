#pragma once
#include "date.h"
#define N 15

class driver { //����� ��������
private:
	char name[N]; //���
	char lastname[N]; //�������
	date bd; //������������� ��������� ����
public:
	void setDriver(); //����� �����
	void printDriver(); //����� ������ 
	void sozdDriver(char n[15], char ln[15], date *birthdate); //����� ��������
};