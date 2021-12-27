#pragma once
#include "date.h"
#include "bus.h"
#include <iostream>
#define N 15
using namespace std;

class human { //����� ��������
public:
	std::string name; //���
	std::string lastname; //�������
	date birthdate; //������������� ������ ����
public:
	void input(); //����� �����
	friend std::ostream& operator<<(std::ostream& out, const human &human) ; //����� ������ 
	virtual std::ostream& print(std::ostream& out) const;
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
	driver() {};
	driver(string name, string lastname, date birthdate, bus driversbus) : human(name, lastname, birthdate) {
		this->driversbus = driversbus;
	};
};

class passenger :public human {
public:
	passenger() {
	};
	virtual std::ostream& print(std::ostream& out) const override;
};
