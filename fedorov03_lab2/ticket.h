#pragma once
#include "driver.h"
#include <iostream>
#define N 15
using namespace std;

class ticket {  //����� �����
private:
	static int count;
	int id;
	int sum; //���� ������ 
	std::string punkt; //����� ����������
	int hours; //����
	int minutes; //������
	driver ticketdrive; //������������� ������ ��������
public:
	void input(); //����� ��� ����� 
	void init(int sum, std::string punkt, int hours, int minutes, driver ticketdrive); //����� ��� �������� 
	void output(); //����� ���  ������
	void sale();  //����� ��� ������� ���� � ������ ������
	static void changeDestination(ticket &ticket, std::string punkt);
};