#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "driver.h"



struct driver setDriver() { //������� ����� 
	driver drive;
	printf("\n������� ���: ");
	scanf("%s", drive.name);
	while (getchar() != '\n');
	printf("\n\n������� �������: ");
	scanf("%s", drive.lastname);
	while (getchar() != '\n');
	printf("\n\n������� ���� ��������:\n");
	drive.bd=setDate();
	return drive;
}

struct driver sozdDriver(char n[15],char ln[15], date birthdate) { //������� ��������
	driver drive;
	strcpy(drive.name,n);
	strcpy(drive.lastname,ln);
	drive.bd = birthdate;
	return drive;
}

void printDriver(driver drive1) { //������� ������
	printf("\n������� ���: %s %s", drive1.lastname, drive1.name);
	printf("\n\n���� ��������: ");
	printDate(drive1.bd);
}