//Degree's ending variety
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	signed temp = 0;
	cout << "������� �������� �����������: ";
	cin >> temp;
	if ((abs(temp)) % 100 == 11)
	{
		cout << "��������";
	}
	else if ((abs(temp)) % 10 == 1)
	{
		cout << " ������";
	}
	else if (abs(temp) % 100 > 11 and abs(temp) % 100 < 20)
	{
		cout << "�����c��";
	}
	else if ((abs(temp)) % 10 == 2 or (abs(temp)) % 10 == 3 or (abs(temp)) % 10 == 4)
	{
		cout << "�������";
	}
	else
	{
		cout << "��������";
	}
}