#include<iostream>
#include"func.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	const char * task = "37. � ������ ����� � ������� �� ����� ��� �����, � ������� ����� ����������� � �������, �������� ����������� (TOK, zona)"; //������� ������
	int max_n=1000;
	interface(task, max_n);
	//system("pause");
	return 0;
}