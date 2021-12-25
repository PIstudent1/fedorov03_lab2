#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "driver.h"



void human::input() { //����� �����
	printf("\n������� ���: ");
	cin >> name;
	while (getchar() != '\n');
	printf("\n\n������� �������: ");
	cin >> lastname;
	while (getchar() != '\n');
	printf("\n\n������� ���� ��������:\n");
	birthdate.input();
	
}

human::human(std::string name, std::string lastname, date birthdate) { //����������� � �����������
	
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			this->name = name;
		}
		else {
			this->name = "-";
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			this->lastname = lastname;
		}
		else {
			this->lastname = "-";
		}
	}
	this->birthdate = birthdate;
}

human::human(){};      //����������� ��� ����������

human::human(std::string value) { //����������� � ����� ���������� 
	this->name = value;
}

void human::output() { //����� ������
	printf("\n���: ");
	cout << name << endl;
	printf("\n�������: ");
	cout << lastname << endl;
	printf("\n\n���� ��������: ");
	birthdate.output();
}

human::human(const human& human) { //����������� �����������
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			name = human.name;
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			lastname = human.lastname; 
		}
	}
	birthdate = human.birthdate;
}

human& human::operator=(const human& human) { //�������� ������������
	if (this == &human) {
		return *this;
	}
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			name = human.name;
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			lastname = human.lastname;
		}
	}
	birthdate = human.birthdate;
	return *this;
}

void driver::input() {
	printf("\n������� ���������� � ��������: ");
	this->human::input();
	printf("\n������� ���������� �� ��������: ");
	driversbus.input();
}

void driver::output() {
	printf("\n���������� � ��������: ");
	this->human::output();
	printf("\n���������� �� ��������");
	driversbus.output();
}