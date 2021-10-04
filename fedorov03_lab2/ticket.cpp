#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ticket.h" //������������� ������������� �����



void ticket::setTicket() //����� �����
{
	printf("\n\n������� ���� ������: ");
	while (scanf("%d", &this->sum) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ����������: ");
	scanf("%s", this->punkt);
	while (getchar() != '\n');
	printf("\n\n������� ����� �����������: ");
	scanf("%s", this->time);
	while (getchar() != '\n');
	printf("\n\n������� ���������� � ��������:");
	this->dr.setDriver();
}

void ticket::sozdTicket(int s, char p[15], char t[15], driver *tickdrive) //����� ��������
{
	this->sum = s;
	strcpy(this->punkt,p);
	strcpy(this->time,t);
	this->dr = *tickdrive;
}

void ticket::printTicket() //����� ������
{
	printf("\n\n���� ������: %d", this->sum);
	printf("\n\n����� ����������: %s", this->punkt);
	printf("\n\n����� �����������: %s", this->time);
	printf("\n\n���������� � ��������: ");
	this->dr.printDriver();
}

void ticket::saleTicket() //����� ������� ���� � ������ ������
{
	int sl1=0;
	double sl2=0;
	printf("\n\n������� ������� ������:");
	scanf("%d", &sl1);
	sl2 = this->sum - (this->sum * sl1 / 100);
	printf("\n\n���� � ������ ������ %d �������(��): %lg",sl1, sl2 );
}
