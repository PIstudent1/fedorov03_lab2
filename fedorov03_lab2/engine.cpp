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
	while (scanf("%d", &pw) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���� ������������:");
	printf("\n");
	cd.input();
}

void engine::create(int n, int p, date createdate)   //����� �������� 
{
	num = n;
	pw = p;
	cd = createdate;
}

void engine::output()  //����� ������ 
{
	printf("\n\n�������� ����� ���������: %d", num);
	printf("\n\n�������� ���������: %d �.�.", pw);
	printf("\n\n���� ������������: ");
	cd.output();
}

int engine::tokvt() //����� �������� �������� � ���
{
	double ls=0.736, res=0;
	res = pw * ls;
	return res;
}
