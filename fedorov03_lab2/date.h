#pragma once

class date { //����� ����
private:
	int day; //����
	int month; //�����
	int year; //���
public:
	void input(); //����� ����� 
	void output(); //����� ������ 
	void init(int day1, int month1, int year1); //����� �������� 
	int indays(date date1); //����� �������� ���� ����� ������
};

