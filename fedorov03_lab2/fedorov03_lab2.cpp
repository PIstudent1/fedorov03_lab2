#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "date.h"
#include "driver.h"
#include "engine.h"
#include "bus.h"
#include "ticket.h"

date date23;
driver drive23;
engine eng23;
bus bus23;
ticket tick23;

int main()
{
    setlocale(LC_ALL,"Rus");
    system("chcp 1251");
    date23 = setDate();
    printDate(date23);
    letDate(date23);
    eng23=sozdEngine();
    kvtEngine(eng23);
    tick23 = setTicket();
    printTicket(tick23);
    
    
}


