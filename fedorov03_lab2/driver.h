#pragma once
#include "date.h"
#include <iostream>
#define N 15
using namespace std;

class driver { //����� ��������
private:
	std::string name; //���
	std::string lastname; //�������
	date birthdate; //������������� ��������� ����
public:
	void input(); //����� �����
	void output(); //����� ������ 
	driver(std::string name, std::string lastname, date birthdate); //����������� � ����������
	driver();
	driver(std::string value);
	driver(const driver& driver);
	driver& operator=(const driver& driver);
};