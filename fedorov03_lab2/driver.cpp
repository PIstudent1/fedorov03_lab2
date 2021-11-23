#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "driver.h"



void driver::input() { //Метод ввода
	printf("\nВведите имя: ");
	cin >> name;
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	cin >> lastname;
	while (getchar() != '\n');
	printf("\n\nВведите дату рождения:\n");
	birthdate.input();
	
}

void driver::init(std::string name, std::string lastname, date birthdate) { //Метод создания
	
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

void driver::output() { //Метод вывода
	printf("\nИмя: ");
	cout << name << endl;
	printf("\nФамилия: ");
	cout << lastname << endl;
	printf("\n\nДата рождения: ");
	birthdate.output();
}