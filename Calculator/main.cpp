//Calculator
#include <iostream>
using namespace std;

#define CALC_MY()
#define CALC_MY2()

void main()
{	
	setlocale(LC_ALL, "");
#ifdef CALC_MY
	double a = 0, b = 0, result=0;
	char mathsymbol;
	cout << "������� �������� a ="; cin >> a;
	cout << "������� �������� b ="; cin >> b;
	cout << "������� ���� �������� �������� : "; cin >> mathsymbol;
	switch (mathsymbol)
	{
	case '+': cout <<"���������: " << a + b; break;
	case '-': cout <<"���������: " << a - b; break;
	case '*': cout <<"���������: " << a * b; break;
	case '/': cout <<"���������: " << a / b; break;
	default: cout << "Error: no operation" << endl;
    }
#endif
#ifdef CALC_MY2
	double c, d;
	char e;
	cout << "������� ���������: ";
	cin >> c >> e >> d;
	//cout << d << e << d;
	if (e == '+')
	{
		cout << c << '+' << d << "=" << c + d << endl;
	}
	else if (e == '-')
	{
		cout << c << '-' << d << "=" << c - d << endl;
	}
	else if (e == '*')
	{
		cout << c << '*' << d << "=" << c * d << endl;
	}
	else if (e == '/')
	{
		cout << c << '/' << d << "=" << c / d << endl;
    }
#endif
}