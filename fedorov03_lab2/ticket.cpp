#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ticket.h" //������������� ������������� �����



void ticket::input() //����� �����
{
	printf("\n\n������� ���� ������: ");
	while (scanf("%d", &sum) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ����������: ");
	scanf("%s", punkt);
	while (getchar() != '\n');
	printf("\n\n������� ����� �����������: ");
	scanf("%s", time);
	while (getchar() != '\n');
	printf("\n\n������� ���������� � ��������:");
	dr.input();
}

void ticket::create(int s, char p[15], char t[15], driver tickdrive) //����� ��������
{
	sum = s;
	strcpy(punkt,p);
	strcpy(time,t);
	dr = tickdrive;
}

void ticket::output() //����� ������
{
	printf("\n\n���� ������: %d", sum);
	printf("\n\n����� ����������: %s", punkt);
	printf("\n\n����� �����������: %s", time);
	printf("\n\n���������� � ��������: ");
	dr.output();
}

void ticket::sale() //����� ������� ���� � ������ ������
{
	int sl1=0;
	double sl2=0;
	printf("\n\n������� ������� ������:");
	scanf("%d", &sl1);
	sl2 = this->sum - (this->sum * sl1 / 100);
	printf("\n\n���� � ������ ������ %d �������(��): %lg",sl1, sl2 );
}
