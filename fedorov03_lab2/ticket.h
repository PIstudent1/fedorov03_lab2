#pragma once
#include "driver.h"

struct ticket {  //��������� �����
	int sum; //���� ������ 
	char punkt[15]; //����� ����������
	char time[15]; //����� �����������
	driver dr; //������������� ��������� ��������
};

struct ticket setTicket(); //������� ����� 
struct ticket sozdTicket(int s, char p[15], char t[15], driver tickdrive); //������� �������� 
void printTicket(ticket tick1); //������� ������
void saleTicket(ticket tick1); //������� ������� ���� � ������ ������