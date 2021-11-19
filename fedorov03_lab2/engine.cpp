#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



void engine::input() //����� ����� 
{
	printf("\n������� �������� ����� ���������: ");
	while (scanf("%d", &num) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� �������� ��������� � �.�.: ");
	while (scanf("%d", &power) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���� ������������:");
	printf("\n");
	createdate.input();
}

void engine::init(int num1, int power1, date createdate1)   //����� �������� 
{
	if (num1 < 0) {
		num = 0;
	}
	else {
		num = num1;
	}
	if (power1 < 0) {
		power = 0;
	}
	else {
		power = power1;
	}
	createdate = createdate1;
}

void engine::output()  //����� ������ 
{
	printf("\n\n�������� ����� ���������: %d", num);
	printf("\n\n�������� ���������: %d �.�.", power);
	printf("\n\n���� ������������: ");
	createdate.output();
}

int* engine::tokvt() //����� �������� �������� � ���
{
	double ls=0.736, res=0;
	res = power * ls;
	return &res;
}
