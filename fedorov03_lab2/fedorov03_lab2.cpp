#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "date.h"
#include "driver.h"
#include "engine.h"
#include "bus.h"
#include "ticket.h"




int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   /* date data[2];
	date data1[3][2];
	for (int i = 0; i < 2; i++) {
		data[i] = date(12, 11, 2021);
		data[i].output();
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			data1[i][j] = date(15, 8, 2001);
			data1[i][j].output();
			printf("  ");
		}
	}*/
	/*date date12 = date(12, 12, 2020); //4
	bus bus1 = bus();
	bus1.input();
	driver drive = driver("Иван", "Иванов", date12, bus1);
	drive.output();*/
	//passenger pass = passenger(); // 5
	//human human = human;
	//pass.input();
	//human = pass;
	//std::cout << human << "\n";
	human human;
	human.input();
	std::cout << human << "\n";
	passenger pass = passenger();
	pass.input();
	std::cout << pass << "\n";
}
