#pragma once
#include "date.h"

struct engine { //��������� �����
private:
	int num; //�������� �����
	int pw;  //��������
	date cd; //������������� ��������� ����
public:
	void setEngine(); //������� ����� 
	void sozdEngine(int n, int pw, date *createdate); //������� �������� 
	void printEngine(); //������� ������ 
	int kvtEngine(); //������� �������� �������� � ���
};