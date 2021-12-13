#pragma once
#include "driver.h"
#include <iostream>
#define N 15
using namespace std;

class ticket {  //����� �����
private:
	static int count; //����������� ����
	int id;
	int sum; //���� ������ 
	std::string punkt; //����� ����������
	int hours; //����
	int minutes; //������
	driver ticketdrive; //������������� ������ ��������
public:
	void input(); //����� ��� ����� 
	ticket(int sum, std::string punkt, int hours, int minutes, driver ticketdrive); //����������� � �����������
	ticket(); //����������� ��� ����������
	ticket(int value);//����������� � ����� ����������
	void output(); //����� ���  ������
	void sale();  //����� ��� ������� ���� � ������ ������
	static void changeDestination(ticket &ticket, std::string punkt);
};