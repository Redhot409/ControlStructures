//Palindrome

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number; // число, введенное с клавиатуры
	int reverse = 0; // исходное число, записанное в обратном порядке
	cout << "Введите число:"; cin >> number;
	int buffer = number; // копируем введенное число, чтобы данные, введенные пользователем, остались неизменными
	while (buffer)// вайл определяет значение в скобках как тру, потому что было присвоение к намберу буфер = намбер
	{
		reverse *= 10;// прежде, чем сохранить следующий младший разряд, нужно выделить под него место
		reverse += buffer % 10; //сохраняем младший разряд буфера
		buffer /= 10; // убираем младший разряд числа 
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Maybe next time" << endl;
	}
}