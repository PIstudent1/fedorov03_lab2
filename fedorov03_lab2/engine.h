#pragma once
#include "date.h"

struct engine { //����� ���������
private:
	int num; //�������� �����
	int pw;  //��������
	date cd; //������������� ��������� ����
public:
	void input(); //����� ����� 
	void create(int n, int p, date createdate); //����� �������� 
	void output(); //����� ������ 
	int tokvt(); //����� �������� �������� � ���
};