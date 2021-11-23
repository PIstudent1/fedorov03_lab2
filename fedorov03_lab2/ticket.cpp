#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include "ticket.h" //������������� ������������� �����



void ticket::input() //����� �����
{
	printf("\n\n������� ���� ������: ");
	while (scanf("%d", &sum) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ����������: ");
	cin >> punkt;
	while (getchar() != '\n');
	printf("\n\n������� ����� �����������: ");
	printf("\n\n������� ����: ");
	while (scanf("%d", &hours) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ������: ");
	while (scanf("%d", &minutes) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���������� � ��������:");
	ticketdrive.input();
}

void ticket::init(int sum, std::string punkt, int hours, int minutes, driver ticketdrive) //����� ��������
{
	int f = 0;
	if (sum < 0) {
		this->sum = 0;
	}
	else {
		this->sum = sum;
	}
	for (int i = 0; i <= punkt.size(); i++) {
		if (punkt[i] == '\0') {
			this->punkt = punkt;
		}
		else {
			this->punkt = "-";
		}
	}
	if (hours < 0 || hours > 23) {
		this->hours = 0;
	}
	else {
		this->hours = hours;
	}
	if (minutes < 0 || minutes > 59) {
		this->minutes = 0;
	}
	else {
		this->minutes = minutes;
	}
	this->ticketdrive = ticketdrive;
}

void ticket::output() //����� ������
{
	printf("\n\n���� ������: %d", sum);
	printf("\n\n����� ����������: ");
	cout << punkt << endl;
	printf("\n\n����� �����������: %d:%d", hours, minutes);
	printf("\n\n���������� � ��������:\n ");
	ticketdrive.output();
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
