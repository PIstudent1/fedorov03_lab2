#pragma once

class date { //����� ����
private:
	int day; //����
	int month; //�����
	int year; //���
public:
	void input(); //����� ����� 
	void output(); //����� ������ 
	void create(int d, int m, int y); //����� �������� 
	int indays(date date1); //����� �������� ���� ����� ������
};

