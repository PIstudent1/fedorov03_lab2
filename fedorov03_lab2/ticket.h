#pragma once
#include "driver.h"

struct ticket {  //����� �����
private:
	int sum; //���� ������ 
	char punkt[15]; //����� ����������
	char time[15]; //����� �����������
	driver dr; //������������� ������ ��������
public:
	void input(); //����� ��� ����� 
	void create(int s, char p[15], char t[15], driver tickdrive); //����� ��� �������� 
	void output(); //����� ���  ������
	void sale(); //����� ��� ������� ���� � ������ ������
};