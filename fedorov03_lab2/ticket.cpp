#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ticket.h"

ticket tick;

struct ticket setTicket()
{
	printf("\n\n������� ���� ������: ");
	while (scanf("%d", &tick.sum) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ����������: ");
	scanf("%s", tick.punkt);
	while (getchar() != '\n');
	printf("\n\n������� ����� �����������: ");
	scanf("%s", tick.time);
	while (getchar() != '\n');
	printf("\n\n������� ���������� � ��������:");
	tick.dr = setDriver();
	return tick;
}

struct ticket sozdTicket()
{
	tick.sum = 650;
	strcpy(tick.punkt,"������");
	strcpy(tick.time,"6.15");
	tick.dr = sozdDriver();
	return tick;
}

void printTicket(ticket tick1)
{
	printf("\n\n���� �����: %d", tick1.sum);
	printf("\n\n����� ����������: %s", tick1.punkt);
	printf("\n\n����� �����������: %s", tick1.time);
	printf("\n\n���������� � ��������: ");
	printDriver(tick1.dr);
}

void saleTicket(ticket tick1)
{
	int sl1=0;
	double sl2=0;
	printf("\n\n������� ������� ������:");
	scanf("%d", &sl1);
	sl2 = tick1.sum - (tick.sum * sl1 / 100);
	printf("\n\n���� � ������ ������ %d �������(��): %lg",sl1, sl2 );
}
