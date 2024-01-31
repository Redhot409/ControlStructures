//FOR_mentor's solutions
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FACTORIAL
//#define POWER
//#define FIBONACCI
//#define SIMPLE_NUMBERS
//#define MULTIPLICATION_TABLE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS
//#define ROMBUS_1
//#define PLUS_MINUS
//#define PLUS_MINUS_1
//#define PLUS_MINUS_MY_VERSION

void main()
{
	setlocale(LC_ALL, "");


#ifdef FACTORIAL
	int n;
	cout << "������� ����� ��� ���������� ���������� :"; cin >> n;
	int f = 1; // ���������
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a; // ��������� �������
		int n; // ����������� �������
	double N = 1; // ������� (��������� ���������� ��������� � �������)
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;

	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl; 
#endif // POWER

#ifdef FIBONACCI
	int n;
	cout << "������� ���������� ����� :"; cin >> n;
	//for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	for (int a = 0, b = 1, c = a + b; a < n; c = (a = b) + (b = c) )
	{
		cout << a << "\t";
		// ��� a = b, b = c, c = a + b;  ����� ���� ��������, ����������� ������� ��������� ��������� ��������������� ����� �������
	}
	cout << endl;
	for (int a = 0, b = 1; a < n; b += a, a = b - a)
	{
		cout << a << "\t";
	}
	cout << endl;
	
#endif // FIBONACCI

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "������� ������ :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true; // ������������, ��� ����� �������, �� ����� ���������
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; // ��������� ������� �������� � ��� �����������
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_NUMBERS


#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
#endif // MULTIPLICATION_TABLE

#ifdef ROWS_OF_STARS
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // ROWS_OF_STARS

#ifdef TRIANGLE_1
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << "  "; //n-1, ����� ������ ������ ������ � ������.
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef ROMBUS
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";// ����� ���������� ������� ������, ��� ��� � ������ ������� ����� �������� ������������� �� 2. 
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS

#ifdef ROMBUS_1
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < 2 * i; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		//for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/"; // �������� : j = 2*i; j < (n-1)*2; j++
		for(int j = 2 * i; j < (n - 1) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_1

#ifdef PLUS_MINUS
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j + i) % 2 == 0)cout << "+ ";else cout << "- ";
		}
		cout << endl;
	}
#endif // PLUS_MINUS

#ifdef PLUS_MINUS_1
	int n;
	cout << "������� ���������� ��������� :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((j + i) % 2 == 0)cout << "+ "; else cout << "- ";
			//if (i%2 ==j%2)cout << "+ "; else cout << "- ";
			(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
		}
		cout << endl;
	}
#endif // PLUS_MINUS_1

#ifdef PLUS_MINUS_MY_VERSION
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 25; j++)
		{
			if (j % 2 == 0) cout << " - ";
			else if (j % 2 != 0) cout << " + ";
			if (j % 5 == 0) cout << "\n" << endl; i++;
		}
	}
#endif // PLUS_MINUS_MY_VERSION

}