#include <iostream>
using namespace std;

/* �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.*/

void main()
{
	setlocale(LC_ALL, "ru");

	int sum = 0;

	int rangeBegin, rangeEnd;

	cout<< "������� ������ ���������."<< endl;
	cin>> rangeBegin;

	cout << "������� ����� ���������."<< endl;
	cin >> rangeEnd;

	do
	{
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}

		rangeBegin++;
	} while (rangeBegin < rangeEnd);

	cout<< "����� ���� ����� �������� ����� � ��������� ��������� = "<< sum<< endl;

}