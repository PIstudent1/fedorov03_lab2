#pragma once
#include "engine.h"
#define N 15

class bus { //����� �������
private:
	int num; //����� ��������
	char *mark; //�����
	engine busengine; //������������� ������ ���������
public:
	void input(); //����� ��� ����� 
	void init(int num1, const char mark1[N], engine busengine1); //����� ��� �������� 
	void output(); //����� ��� ������
};
