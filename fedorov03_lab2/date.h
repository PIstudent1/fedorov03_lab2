#pragma once

class date { //����� ����
private:
	int day; //����
	int month; //�����
	int year; //���
public:
	void setDate(); //����� ����� 
	void printDate(); //����� ������ 
	void sozdDate(int d, int m, int y); //����� �������� 
	int letDate(date *date1); //����� �������� ���� ����� ������
};

