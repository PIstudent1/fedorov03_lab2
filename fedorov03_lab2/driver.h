#pragma once
#include "date.h"
#define N 15

struct driver {
	char name[N];
	char lastname[N];
	date bd;
};

struct driver setDriver();
void printDriver(driver drive1);
struct driver sozdDriver();
