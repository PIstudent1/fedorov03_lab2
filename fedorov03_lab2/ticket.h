#pragma once
#include "driver.h"
#define N 15


class ticket {  //����� �����
private:
	int sum; //���� ������ 
	char *punkt; //����� ����������
	int hours; //����
	int minutes; //������
	driver ticketdrive; //������������� ������ ��������
public:
	void input(); //����� ��� ����� 
	void init(int sum1, const char punkt1[N], int hours1, int minutes1, driver ticketdrive1); //����� ��� �������� 
	void output(); //����� ���  ������
	void sale(); //����� ��� ������� ���� � ������ ������
};