#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "date.h"
#include "driver.h"
#include "engine.h"
#include "bus.h"

date date23;
driver drive23;
engine eng23;
bus bus23;

int main()
{
    setlocale(LC_ALL,"Rus");
    system("chcp 1251");
    bus23=setBus();
    printBus(bus23);

    
    
}


