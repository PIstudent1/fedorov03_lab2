#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bus.h"



void bus::input() //����� ����� 
{
	printf("\n\n������� ����� ��������: ");
	while (scanf("%d", &num) !=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ��������: ");
	scanf("%s", mark);
	while (getchar() != '\n');
	printf("\n\n������� ������ � ���������:\n");
	busengine.input();
}

void bus::init(int num1, const char mark1[N], engine busengine1) //����� �������� 
{
	if (num1 < 0) {
		num = 0;
	}

	else {
		num = num1;
	}
	mark = new char[strlen(mark1)];
	for (int i = 0; i <= strlen(mark1); i++) {
		if (mark1[i] == '\0') {
			strcpy(mark, mark1);
		}
		else {
			strcpy(mark, "-");
		}
	}
	busengine = busengine1;
}

void bus::output() //����� ������
{
	printf("\n\n����� ��������: %d", num);
	printf("\n\n����� ��������: %s", mark);
	printf("\n\n������ � ���������:");
	busengine.output();
}

