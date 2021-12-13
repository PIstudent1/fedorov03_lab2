#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "driver.h"



void driver::input() { //����� �����
	printf("\n������� ���: ");
	cin >> name;
	while (getchar() != '\n');
	printf("\n\n������� �������: ");
	cin >> lastname;
	while (getchar() != '\n');
	printf("\n\n������� ���� ��������:\n");
	birthdate.input();
	
}

driver::driver(std::string name, std::string lastname, date birthdate) { //����������� � �����������
	
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

driver::driver(){};      //����������� ��� ����������

driver::driver(std::string value) { //����������� � ����� ���������� 
	this->name = value;
}

void driver::output() { //����� ������
	printf("\n���: ");
	cout << name << endl;
	printf("\n�������: ");
	cout << lastname << endl;
	printf("\n\n���� ��������: ");
	birthdate.output();
}

driver::driver(const driver& driver) { //����������� �����������
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			name = driver.name;
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			lastname = driver.lastname; 
		}
	}
	birthdate = driver.birthdate;
}

driver& driver::operator=(const driver& driver) { //�������� ������������
	if (this == &driver) {
		return *this;
	}
	for (int i = 0; i <= name.size(); i++) {
		if (name[i] == '\0') {
			name = driver.name;
		}
	}
	for (int i = 0; i <= lastname.size(); i++) {
		if (lastname[i] == '\0') {
			lastname = driver.lastname;
		}
	}
	birthdate = driver.birthdate;
	return *this;
}