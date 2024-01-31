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
	cout << "Введите значение a ="; cin >> a;
	cout << "Введите значение b ="; cin >> b;
	cout << "Введите знак желаемой операции : "; cin >> mathsymbol;
	switch (mathsymbol)
	{
	case '+': cout <<"Результат: " << a + b; break;
	case '-': cout <<"Результат: " << a - b; break;
	case '*': cout <<"Результат: " << a * b; break;
	case '/': cout <<"Результат: " << a / b; break;
	default: cout << "Error: no operation" << endl;
    }
#endif
#ifdef CALC_MY2
	double c, d;
	char e;
	cout << "Введите выражение: ";
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