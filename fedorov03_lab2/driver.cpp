#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



void driver::input() { //����� ����� 
	printf("\n������� ���: ");
	scanf("%s", name);
	while (getchar() != '\n');
	printf("\n\n������� �������: ");
	scanf("%s", lastname);
	while (getchar() != '\n');
	printf("\n\n������� ���� ��������:\n");
	bd.input();
	
}

void driver::create(char n[15],char ln[15], date birthdate) { //����� ��������
	strcpy(name,n);
	strcpy(lastname,ln);
	bd = birthdate;
}

void driver::output() { //����� ������
	printf("\n������� ���: %s %s", lastname, name);
	printf("\n\n���� ��������: ");
	bd.output();
}