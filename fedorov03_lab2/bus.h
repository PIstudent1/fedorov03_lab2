#pragma once
#include "engine.h"


class bus { //����� �������
private:
	int num1; //����� ��������
	char mark[15]; //�����
	engine be; //������������� ������ ���������
public:
	void setBus(); //����� ��� ����� 
	void sozdBus(int n, char ma[15], engine *buseng); //����� ��� �������� 
	void printBus(); //����� ��� ������
};
