// ConsoleApplication11.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct str     
{
	char *capital;       //��� c������
	char *counter;        //�������� ������
	int squad;           //�������
	int population;       //���������
};

int main()
{
	setlocale(LC_ALL, "rus");

	str country1;   // ������ 1

	country1.counter = "������"; //��������� ������ � ������ � �.�.
	country1.capital = "������";
	country1.squad = 17;
	country1.population = 147;

	cout << "������: " << country1.counter << endl;
	cout << "�������: " << country1.capital << endl;
	cout << "�������: " << country1.squad << " ��� ��. ��" << endl;
	cout << "���������: " << country1.population << " ��� �������" << endl;
	
	str country2;   // ������ 2

	country2.counter = "������"; //��������� ������ � ������ � �.�.
	country2.capital = "������";
	country2.squad = 133;
	country2.population = 53;

	cout << "������: " << country2.counter << endl;
	cout << "�������: " << country2.capital << endl;
	cout << "�������: " << country2.squad << " ��� ��. ��" << endl;
	cout << "���������: " << country2.population << " ��� �������" << endl;

	str country3;   // ������ 3

	country3.counter = "���������"; //��������� ������ � ������ � �.�.
	country3.capital = "���������";
	country3.squad = 338;
	country3.population = 5500;

	cout << "������: " << country3.counter << endl;
	cout << "�������: " << country3.capital << endl;
	cout << "�������: " << country3.squad << " ��� ��. ��" << endl;
	cout << "���������: " << country3.population << " ��� �������" << endl;

	return 0;
}

