#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



void driver::setDriver() { //������� ����� 
	printf("\n������� ���: ");
	scanf("%s", this->name);
	while (getchar() != '\n');
	printf("\n\n������� �������: ");
	scanf("%s", this->lastname);
	while (getchar() != '\n');
	printf("\n\n������� ���� ��������:\n");
	this->bd.setDate();
	
}

void driver::sozdDriver(char n[15],char ln[15], date *birthdate) { //������� ��������
	strcpy(this->name,n);
	strcpy(this->lastname,ln);
	this->bd = *birthdate;
}

void driver::printDriver() { //������� ������
	printf("\n������� ���: %s %s", this->lastname, this->name);
	printf("\n\n���� ��������: ");
	this->bd.printDate();
}