#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



struct engine setEngine() //������� ����� 
{
	engine eng;
	printf("\n������� �������� ����� ���������: ");
	while (scanf("%d", &eng.num) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� �������� ��������� � �.�.: ");
	while (scanf("%d", &eng.pw) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���� ������������:");
	printf("\n");
	eng.cd = setDate();
	return eng;
}

struct engine sozdEngine(int n, int pw, date createdate)   //������� �������� 
{
	engine eng;
	eng.num = n;
	eng.pw = pw;
	eng.cd = createdate;
	return eng;
}

void printEngine(engine eng1)  //������� ������ 
{
	printf("\n\n�������� ����� ���������: %d", eng1.num);
	printf("\n\n�������� ���������: %d �.�.", eng1.pw);
	printf("\n\n���� ������������: ");
	printDate(eng1.cd);
}

int kvtEngine(engine eng1) //������� �������� �������� � ���
{
	double ls=0.736, res=0;
	res = eng1.pw * ls;
	return res;
}
