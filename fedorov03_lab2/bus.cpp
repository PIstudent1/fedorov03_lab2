#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



void bus::setBus() //����� ����� 
{
	printf("\n\n������� ����� ��������: ");
	while (scanf("%d", &this->num1) !=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ��������: ");
	scanf("%s", this->mark);
	while (getchar() != '\n');
	printf("\n\n������� ������ � ���������:\n");
	this->be.setEngine();
}

void bus::sozdBus(int n, char ma[15], engine *buseng) //����� �������� 
{
	this->num1 = n;
	strcpy(this->mark, ma);
	this->be = *buseng;
}

void bus::printBus() //����� ������
{
	printf("\n\n����� ��������: %d", this->num1);
	printf("\n\n����� ��������: %s", this->mark);
	printf("\n\n������ � ���������:");
	this->be.printEngine();
}

