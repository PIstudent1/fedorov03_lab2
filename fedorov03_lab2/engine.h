#pragma once
#include "date.h"

class engine { //����� ���������
private:
	int num; //�������� �����
	int power;  //��������
	date createdate; //������������� ��������� ����
public:
	void input(); //����� ����� 
	void init(int num1, int power1, date createdate1); //����� �������� 
	void output(); //����� ������ 
	int tokvt(); //����� �������� �������� � ���
};