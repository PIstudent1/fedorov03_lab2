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
    date date23, date24;
    driver drive23;
    engine eng23;
    bus bus23;
    ticket tick23;
    int a = 0, b=0;
    date23 = sozdDate(30, 3, 2021); //Функция создания даты
    date24 = sozdDate(12, 3, 1900); //Функция создания даты
    a=letDate(date23, date24); //Количество дней между датами
    printf("\nВведены даты: ");
    printDate(date23); //Вывод даты
    printf(" и ");
    printDate(date24); //Вывод даты
    printf("\nКоличество дней между датами: %d", a);
    drive23=setDriver(); //Ввод данных о водителе
    printDriver(drive23);//Вывод данных о водителе
    eng23=setEngine(); //Ввод данных о двигателе
    b=kvtEngine(eng23); //ПЕревод мощности в кВт
    printf("\nМощность двигателя в кВт: %d", b);
}


