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
	void init(int num, std::string mark, engine busengine); //����� ��� �������� 
	void output(); //����� ��� ������
};
