#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



struct bus setBus() //������� ����� 
{
	bus bu;
	printf("\n\n������� ����� ��������: ");
	while (scanf("%d", &bu.num1) !=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ��������: ");
	scanf("%s", bu.mark);
	while (getchar() != '\n');
	printf("\n\n������� ������ � ���������:\n");
	bu.be = setEngine();
	return bu;
}

struct bus sozdBus(int n, char ma[15], engine buseng) //������� �������� 
{
	bus bu;
	bu.num1 = n;
	strcpy(bu.mark, ma);
	bu.be = buseng;
	return bu;
}

void printBus(bus bus1) //������� ������
{
	printf("\n\n����� ��������: %d", bus1.num1);
	printf("\n\n����� ��������: %s", bus1.mark);
	printf("\n\n������ � ���������:");
	printEngine(bus1.be);
}

