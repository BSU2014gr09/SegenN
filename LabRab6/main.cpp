//7. ������������� ������ �� ���������� ���� �� ���������� ����, ��������� ������ �� ����.
#include<iostream>
#include"src.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	arrStr text;
	int n;
	cout << "������� ����������� �����.\n";
	cin >> n;
	fflush(stdin);
	if (text.setStr(n))
	{
		cout << "Error: no memory!\n";
		system("pause");
		return 0;
	}
	cout << "������� 1, ���� ������ ������������� �� �����������\n";
	cout << "������� 0, ���� ������ ������������� �� �����������\n";
	bool r;
	cin >> r;
	text.sort(r);
	text.getStr();
	system("pause");
	return 0;
}