#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "engine.h"



void engine::setEngine() //����� ����� 
{
	printf("\n������� �������� ����� ���������: ");
	while (scanf("%d", &this->num) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� �������� ��������� � �.�.: ");
	while (scanf("%d", &this->pw) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ���� ������������:");
	printf("\n");
	this->cd.setDate();
}

void engine::sozdEngine(int n, int pw, date *createdate)   //����� �������� 
{
	this->num = n;
	this->pw = pw;
	this->cd = *createdate;
}

void engine::printEngine()  //����� ������ 
{
	printf("\n\n�������� ����� ���������: %d", this->num);
	printf("\n\n�������� ���������: %d �.�.", this->pw);
	printf("\n\n���� ������������: ");
	this->cd.printDate();
}

int engine::kvtEngine() //����� �������� �������� � ���
{
	double ls=0.736, res=0;
	res = this->pw * ls;
	return res;
}
