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
    date date23[3] = { date(12), date(13), date(14)};
    for (int i = 0; i < 3; i++) {
        date23[i].output();
    }
    date* date24 = new date();
    date date25 = date();
    date25 = date(25,12,2021);
    date24 = new date(12,12,2021);
    driver driver1 = driver("Иван","Иванов",date25);
    driver driver2 = driver(driver1);
    driver1.output();
    driver2.output();
}


