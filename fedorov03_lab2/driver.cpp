#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "driver.h"



void human::input() { //Метод ввода
	printf("\nВведите имя: ");
	cin >> name;
	while (getchar() != '\n');
	printf("\n\nВведите фамилию: ");
	cin >> lastname;
	while (getchar() != '\n');
	printf("\n\nВведите дату рождения:\n");
	birthdate.input();
	
}

human::human(std::string name, std::string lastname, date birthdate) { //Конструктор с параметрами
	
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

human::human(){};      //Конструктор без параметров

human::human(std::string value) { //Конструктор с одним параметром 
	this->name = value;
}



human::human(const human& human) { //Конструктор копирования
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

human& human::operator=(const human& human) { //оператор присваивания
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
	printf("\nВведите информацию о водителе: ");
	this->human::input();
	printf("\nВведите информацию об автобусе: ");
	driversbus.input();
}
void driver::output() {
	printf("\nИнформация о водителе: ");
	cout << this << "\n";
	printf("\nИнформация об автобусе");
	cout << driversbus << "\n";
}

std::ostream& passenger::print(std::ostream& out) const{
	out << "\nФамилия:" << this->name << "\nИмя:" << this->lastname << "\nДата рождения:" << this->birthdate << "";
	return out;
}

std::ostream& operator<<(std::ostream& out, const human& human) { // 6
	return human.print(out);
}

ostream& human::print(std::ostream& out) const {
	out << "\nФамилия:" << this->name << "\nИмя:" << this->lastname << "\nДата рождения:" << this->birthdate << ""; // 7
	return out;
}