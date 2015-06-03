#include<iostream>
#include<fstream>
#include<memory>
#include"passengers.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Passenger * arrPass = nullptr;
	int n;
	int choice;
	do{
		system("cls");
		cout << "����� ������ ������ ����������, ������� 1\n";
		cout << "����� ������� ������ ����������� � ���������� �������, ������� 2\n";
		cout << "����� ���������� ��������� � ����������(����������) ������������ ���� ������, ������� 3\n";
		cout << "����� ����������, �������� �� ��������, ����� �������� ������� �� ����� ������� ����� ����� 20��, ������� 4\n";
		cout << "����� �����, ������� 0\n";
		cin >> choice;
		switch (choice){
		case 1:
			{
				system("cls");
				ifstream in("in.txt");
				if (!in.is_open())
				{
					cout << "������: ��������� ������� ����!\n";
					system("pause");
					break;
				}
				delete[] arrPass;
				in >> n;
				arrPass = new(std::nothrow) Passenger[n];
				if (!arrPass)
				{
					cout << "������: ������������ ������!\n";
					system("pause");
					break;
				}
				for (int i = 0; i < n; i++)
				{
					in >> arrPass[i];
				}
				in.close(); 
				cout << "������ ������� ���������.\n";
				system("pause");
			}
			break;
		case 2:
			system("cls");
			sort(arrPass, arrPass + n - 1);
			for (int i = 0; i < n; i++)
				cout << arrPass[i];
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "�������� � ������������ ������������ ������: " << getName(findMaxPassenger(arrPass, n)) << endl;
			system("pause");
			break;
		case 4:
			if (moreThan20(arrPass, n)) cout << "����� �������� �������.\n";
			else cout << "������ ��������� ���.\n";
			system("pause");
			break;
		case 0: break;
		default:
			system("cls");
			cout << "������, ���������� ��� ���.\n";
			system("pause");
		}
	} while (choice);
	delete[] arrPass;
	//system("pause");
	return 0;
}