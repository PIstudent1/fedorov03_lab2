#pragma once
#include "date.h"
#include "bus.h"
#include <iostream>
#define N 15
using namespace std;

class human { //����� ��������
private:
	std::string name; //���
	std::string lastname; //�������
	date birthdate; //������������� ��������� ����
public:
	void input(); //����� �����
	void output(); //����� ������ 
	human(std::string name, std::string lastname, date birthdate); //����������� � ����������
	human();
	human(std::string value);
	human(const human& human);
	human& operator=(const human& human);
};


class driver : protected human {
private: 
	bus driversbus;
public: 
	void input();
	void output();

};

class passenger :public human {

};
