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
    date *date23, date24;
    driver drive23;
    engine *eng23 = new engine [2];
    bus bus23;
    ticket tick23;
    int a = 0, b = 0;
    date24.init(20, 12, 2020);
    drive23.init("Иван", "Иванов", date24);
    tick23.init(345, "Киев", 12, 55, drive23);
    date23 = new date();
    date23->init(20,12,2021);
    date24.init(20, 12, 2020);
    a=date23->indays(date24);
    date23->output();
    printf(" ");
    date24.output();
    printf("\nКоличество дней между датами: %d", a);
    eng23->input();
    eng23->output();
    b=eng23->tokvt();
    printf("\nМощность двигателя в кВт: %d", b);
    delete date23;
    if (eng23) {
        delete[] eng23;
    }
}


