#pragma once
#include "driver.h"
#include <iostream>
#define N 15
using namespace std;

class ticket {  //����������� �����
	//static int count; //����������� ����
	//int id;
public:
	virtual void input() = 0 ; //����� ��� ����� 
	//friend std::ostream& operator<<(std::ostream& out, const ticket& ticket); //����� ���  ������
	virtual void output() = 0;
	virtual void sale() = 0;  //����� ��� ������� ���� � ������ ������
	/*static void changeDestination(ticket &ticket, std::string punkt);*/
};


class forchildren : private ticket {
	int sum; //���� ������ 
	std::string punkt; //����� ����������
	std::string type;
	int hours; //����
	int minutes; //������
	passenger passengerticket; //������������� ������ ��������
public:
	void input() override; //����� ��� ����� 
	forchildren(int sum, std::string punkt, int hours, int minutes, passenger passengerticket); //����������� � �����������
	forchildren(); //����������� ��� ����������
	forchildren(int value);//����������� � ����� ����������
	//friend std::ostream& operator<<(std::ostream& out, const ticket& ticket); //����� ���  ������
	void output() override;
	int sale(int sl1) override;  //����� ��� ������� ���� � ������ ������
	/*static void changeDestination(ticket &ticket, std::string punkt);*/
};


class foradult : private ticket {
	int sum; //���� ������ 
	std::string punkt; //����� ����������
	std::string type;
	int hours; //����
	int minutes; //������
	passenger passengerticket; //������������� ������ ��������
public:
	void input() override; //����� ��� ����� 
	foradult(int sum, std::string punkt, int hours, int minutes, passenger passengerticket); //����������� � �����������
	foradult(); //����������� ��� ����������
	foradult(int value);//����������� � ����� ����������
	//friend std::ostream& operator<<(std::ostream& out, const ticket& ticket); //����� ���  ������
	void output() override;
	int sale(int sl1) override;  //����� ��� ������� ���� � ������ ������
	/*static void changeDestination(ticket &ticket, std::string punkt);*/
};
