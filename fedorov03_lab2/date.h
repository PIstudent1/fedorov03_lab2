#pragma once
#include <iostream>
class date { //����� ����
private:
	int day; //����
	int month; //�����
	int year; //���
public:
	void input(); //����� ����� 
	friend std::ostream& operator<<(std::ostream &out, const date& data); //����� ������ 
	date(int day1, int month1, int year1); //����������� � �����������
	date();//����������� ��� ����������
	date(int value);//����������� � ����� ����������
	int* indays(date &date1); //����� �������� ���� ����� ������
	friend void reset(date& date);
	int getAge();
	date operator+(int day);
	date& operator++();
	date operator++(int);
};