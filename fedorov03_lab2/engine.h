#pragma once
#include "date.h"

class engine { //����� ���������
private:
	int num; //�������� �����
	int power;  //��������
	date createdate; //������������� ��������� ����
public:
	void input(); //����� ����� 
	engine(int num1, int power1, date createdate1); //����������� � ����������
	engine();//����������� ��� ����������
	engine(int value);
	friend std::ostream& operator<<(std::ostream& out, const engine& engine); //����� ������ 
	int tokvt(); //����� �������� �������� � ���
};