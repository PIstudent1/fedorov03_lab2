#pragma once

class date { //����� ����
private:
	int day; //����
	int month; //�����
	int year; //���
public:
	void input(); //����� ����� 
	void output(); //����� ������ 
	date(int day1, int month1, int year1); //����������� � �����������
	date();//����������� ��� ����������
	date(int value);//����������� � ����� ����������
	int* indays(date &date1); //����� �������� ���� ����� ������
	friend void reset(date& date);
	date operator+(int day);
	date& operator++();
	date operator++(int);
};