#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"

bus bu;

struct bus setBus() //������� ����� 
{
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

struct bus sozdBus() //������� �������� 
{
	bu.num1 = 256;
	strcpy(bu.mark, "Honda");
	bu.be = sozdEngine();
	return bu;
}

void printBus(bus bus1) //������� ������
{
	printf("\n\n����� ��������: %d", bus1.num1);
	printf("\n\n����� ��������: %s", bus1.mark);
	printf("\n\n������ � ���������:");
	printEngine(bus1.be);
}

