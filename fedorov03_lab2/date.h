#pragma once

struct date { //��������� ����
	int day; //����
	int month; //�����
	int year; //���
};

struct date setDate(); //������� ����� 
void printDate(date date1); //������� ������ 
struct date sozdDate(int d , int m , int y); //������� �������� 
int letDate(date date1, date date2); //������� �������� ���� ����� ������