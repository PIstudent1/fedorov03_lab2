#pragma once
#include "engine.h"
#include <iostream>
#define N 15
using namespace std;

class bus { //����� �������
private:
	int num; //����� ��������
	std::string mark; //�����
	engine busengine; //������������� ������ ���������
public:
	void input(); //����� ��� ����� 
	bus(int num, std::string mark, engine busengine); //����������� � �����������
	bus();//����������� ��� ����������
	bus(int value);//����������� � ����� ����������
	void output(); //����� ��� ������
};
