#pragma once
#include "engine.h"


struct bus {
	int num1;
	char mark[15];
	engine be;
};

struct bus setBus();
struct bus sozdBus();
void printBus(bus bus1);
