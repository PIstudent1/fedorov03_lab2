#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



void bus::input() //����� ����� 
{
	printf("\n\n������� ����� ��������: ");
	while (scanf("%d", &num1) !=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ��������: ");
	scanf("%s", mark);
	while (getchar() != '\n');
	printf("\n\n������� ������ � ���������:\n");
	be.input();
}

void bus::create(int n, char ma[15], engine buseng) //����� �������� 
{
	num1 = n;
	strcpy(mark, ma);
	be = buseng;
}

void bus::output() //����� ������
{
	printf("\n\n����� ��������: %d", num1);
	printf("\n\n����� ��������: %s", mark);
	printf("\n\n������ � ���������:");
	be.output();
}

