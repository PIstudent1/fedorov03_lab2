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
	void init(std::string name, std::string lastname, date birthdate); //����� ��������
};