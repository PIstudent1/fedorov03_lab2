#pragma once
#include "date.h"

struct engine { //��������� �����
	int num; //�������� �����
	int pw;  //��������
	date cd; //������������� ��������� ����
};

struct engine setEngine(); //������� ����� 
struct engine sozdEngine(int n, int pw, date createdate); //������� �������� 
void printEngine(engine eng1); //������� ������ 
int kvtEngine(engine eng1); //������� �������� �������� � ���
