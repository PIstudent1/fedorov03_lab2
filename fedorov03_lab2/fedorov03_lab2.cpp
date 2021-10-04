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
    driver *drive23;
    engine *eng23 = new engine [2];
    bus bus23;
    ticket tick23;
    int a = 0, b = 0;
    date23 = new date();
    date23->sozdDate(20,12,2021);
    date24.sozdDate(20, 12, 2020);
    a=date23->letDate(&date24);
    date23->printDate();
    printf(" ");
    date24.printDate();
    printf("\nКоличество дней между датами: %d", a);
    eng23->setEngine();
    eng23->printEngine();
    b=eng23->kvtEngine();
    printf("\nМощность двигателя в кВт: %d", b);
    delete date23;
    if (eng23) {
        delete[] eng23;
    }
}

