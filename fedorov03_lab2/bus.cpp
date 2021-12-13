#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "bus.h"
#include <string>
using namespace std;


void bus::input() //����� ����� 
{
	printf("\n\n������� ����� ��������: ");
	while (scanf("%d", &num) !=1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}
	printf("\n\n������� ����� ��������: ");
	cin >> mark;
	while (getchar() != '\n');
	printf("\n\n������� ������ � ���������:\n");
	busengine.input();
}

bus::bus(int num, std::string mark, engine busengine) //����������� � �����������
{
	if (num < 0) {
		this->num = 0;
	}

	else {
		this->num = num;
	}
	for (int i = 0; i <= mark.size(); i++) {
		if (mark[i] == '\0') {
			this->mark = mark;
		}
		else {
			this->mark = "-";
		}
	}
	this->busengine = busengine;
}

bus::bus() {};//����������� ��� ����������

bus::bus(int value) { //����������� � ����� ���������� 
	this->num = value;
}

void bus::output() //����� ������
{
	printf("\n\n����� ��������: %d", num);
	printf("\n\n����� ��������: ");
	cout << mark << endl;
	printf("\n\n������ � ���������:");
	busengine.output();
}

