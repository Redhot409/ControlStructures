//FOR
#include <iostream>
using namespace std;

//#define INTRO
//#define FACTOR2
//#define EXPONENT
//#define ASCII
//#define FIBONACCI
//#define SIMPLE_DIGITS
//#define MULTIPLE_TABLE
//#define PIFAGOR_TABLE

void main()
{
	setlocale(LC_ALL, "");

	//Intro

#ifdef INTRO	
	int n = 5;
	// 1 - объявляется счетчик; 2- проверяется условие (сравнение) тру или фолс; 3 - если тру
	// выполняется тело цикла; 4 - добавляет единицу; 5 - снова проверяется условие пока условие не вернуло фолс
	// тогда происходит выход за пределы цикла и при этом удаляются все локальные переменные и счетчики.
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif

	//Factor2

#ifdef FACTOR2
	int k, res = 1;
	cout << "Input digit for !-calculation :"; cin >> k;

	for (int i = 1; i <= k; i++)
	{
		res *= i;
	}
	cout << k << " ! = " << res << endl;
#endif

	//Exponent2

#ifdef EXPONENT
	int base, power;
	float result = 1;
	cout << "Input base :"; cin >> base;
	cout << "Input power :"; cin >> power;
	if (power > 0)
	{
		for (int j = 1; j <= power; ++j)
		{
			result *= base;
		}
		cout << result << endl;
	}
	else if (power < 0)
	{
		for (int j = -1; j >= power; --j)
		{
			result /= base;
		}
		cout << result << endl;
	}
#endif

	//ASCII-symbols2

#ifdef ASCII
	int num = 256;

	for (int i = 0; i < num;)
	{
		cout << (char)i++ << " ";
		if (i % 16 == 0) cout << endl;
	}
#endif

	//Fibonacci

#ifdef FIBONACCI
	int num_1 = 0, num_2 = 1, num_3 = 0, num_4 = 1, sum = 1, sum_1 = 1, m; //for(int a=0,b=1,c=a+b; a<n; a=b, b=c, c=a+b) - инициализация+условие+запись числа Фибоначчи;
	cout << num_1 << "\t" << num_2 << "\t" << sum << "\t";                 // cout<<a<<"\t;   или с = (a = b) + (b = c)
	for (k = 0; k <= 4; k++)                                               //cout<<endl;
	{

		num_1 = sum;   // Переопределим num_1, равный сумме num_1 +num_2 для нахождения следующего числа ряда Фибоначчи  
		sum += num_2;    // Переопределим сумму как равную сумме второе слагаемое 
		num_2 = num_1; // Присвоим вторму слагаемому значение первого 
		cout << sum << "\t";
	}
	cout << "\n*********\n\n" << num_3 << "\n" << num_4 << "\n" << sum_1 << "\t";
	for (m = 0; m <= 16; m++)
	{
		num_3 = sum_1;
		sum_1 += num_4;
		num_4 = num_3;
		cout << sum_1 << "\t";
	}
	cout << endl;
#endif

	// Simple digits

#ifdef SIMPLE_DIGITS
	int anydiget, check_num, denominator, results, count;
	cout << "Введите предельное число проверки :"; cin >> anydiget;
	cout << "Итак, простые числа : " << endl;

	/* for (int i = 0; i, =n; i++)
	{
		bool simple = true;
		for (int j = 2; j < i; j++)  j должно быть строго меньше i, j=2 так как на единицу делятся все числа, поэтому нам нужно проверить только раз деление с остатком (т.е третий делитель числа)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}

		}
		if (simple)cout << i << "\t";*/

	}


	for (check_num = 1; check_num <= anydiget; check_num++)
	{
		count = 0; // счетчик делителей
		for (denominator = 1; denominator <= check_num; denominator++)
		{
			results = check_num % denominator;
			if (results == 0)
			{
				count++;
			}
			else if (results != 0)
			{
				count += 0;
			}
		}
		if (count == 2) // Проверка количества делителей числа с определением простых чисел.
		{
			cout << check_num << "\n";
		}
	}
#endif	

	// Multiple table

#ifdef MULTIPLE_TABLE	

	int p; // множитель 1
	int r; // множитель 2
	int dig_result;
	cout << "Таблица умножения выглядит так :" << "\n\n" << "Начинаем с единички :\n" << endl;
	for (p = 1; p <= 9; p++)
	{
		for (r = 1; r <= 9; r++)
		{
			dig_result = p * r;
			cout << p << " * " << r << " = " << dig_result << endl;
		}
		if (p < 9)
		{
			cout << "\n" << "Теперь " << p + 1 << " : \n" << endl;
		}
	}
#endif

	// Pifagor table

#ifdef PIFAGOR_TABLE	 

	int s; // множитель 1
	int t; // множитель 2
	int dig_mean;
	int counter;
	cout << "Таблица Пифагора выглядит как-то так :" << "\n" << endl;
	for (s = 1; s <= 9; s++)
	{
		counter = 0;
		for (t = 1; t <= 9; t++)
		{
			dig_mean = s * t;
			counter++;
			if (counter == 9)
			{
				cout << "\t" << dig_mean << endl;
			}
			else cout << "\t" << dig_mean;
		}
	}
#endif

}

// 