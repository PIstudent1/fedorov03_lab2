#pragma once
#include "date.h"

struct engine {
	int num;
	int pw;
	date cd;
};

struct engine setEngine();
struct engine sozdEngine();
void printEngine(engine eng1);
void  kvtEngine(engine eng1);
