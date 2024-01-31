//Loops
#include<iostream>
#include<conio.h>
using namespace std;

#define WHILE_1
#define WHILE_2


#define UP_ARROW       72  //ASCII-CODE СТРЕЛОЧЕК ИКЛАВИШИ ВВОДА/ВЫХОДА
#define DOWN_ARROW     80
#define LEFT_ARROW     75
#define RIGHT_ARROW    77
#define ENTER          13
#define ESCAPE         27

#define FACTORIAL
#define POWER
#define ASCII


void main()
{
	setlocale(LC_ALL, "");

//#ifdef WHILE_1
//	int i = 0; // счетчик цикла
//    int n; // кол-во итераций
//	cout << "Введите количество итераций"; cin >> n;
//	while (i < n)
//	{
//		cout << "Hello World!";
//		cout << "Сам привет";
//		cout << ++i << endl;
//		i++;  
//	}	
//#endif// WHILE_1


	//char key;
	//do
	//{

	//	key = _getch(); // функция _getch() ожидает нажатие клавиши и возвращает ASCII-код нажатой клавиши
	//	// функция _getch () объявлена в библиотеке <conio.h>
	//	//cout << (int)key << "\t" << key << endl;
	//	     /*if (key == 'w' || key == 'W' || key == UP_ARROW)cout << "Вперед" << endl;
	//	else if (key == 's' || key == 'S' || key == DOWN_ARROW)cout << "Назад" << endl;
	//	else if (key == 'a' || key == 'A' || key == LEFT_ARROW)cout << "Влево" << endl;
	//	else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)cout << "Вправо" << endl;
	//	else if (key == ' ')cout << "Прыжок" << endl;
	//	else if (key == 13)cout << "Огонь" << endl;
	//	else if (key != 27 && key != -32)cout << "Error" << endl;*/
	// 	// (int)key -это явное преобразлвание переменной key в тип данных int,
	//	// чтобы увидеть  код символа аски-кода , хранящегося в переменной key
	//	
	//	switch (key)
	//	{
	//		case 'w':	
	//		case 'W':	
	//		case UP_ARROW:	cout << "Вперед" << endl;	break;
	//		case 's':	
	//		case 'S':	
	//		case DOWN_ARROW:	cout << "Назад" << endl;	break;
	//		case 'a':	
	//		case 'A':	
	//		case LEFT_ARROW:	cout << "Налево" << endl;	break;
	//		case 'd':	
	//		case 'D':	
	//		case RIGHT_ARROW:	cout << "Направо" << endl;	break;
	//		case ESCAPE:cout << "Выход" << endl;
	//		case -32:break;// чтобы при стрелочках не выдавалось сообщение error
	//		default:	cout << "Error" << endl;	break;

	//	}
	//} while (key != 27);

	//-----------------//---------------//
	 
	
	// Factorial


	/*double result = 1, fact_number,fact_multiplier = 1;
	cout << "Input fact_number :"; cin >> fact_number;
	while (fact_multiplier <= fact_number)
	{
		 
		result *= fact_multiplier;
		fact_multiplier += 1;
	} 
	 cout << result << endl;*/

	//---------------//-----------------//


	 //Exponential

	/*double base, power, result;
	std::cout << "input base value :"; cin >> base;
	std::cout << "Input power value :"; cin >> power;
	if (power<0)
	{
		base = 1 / base;
		power = - power;
	}
	int i = 0;
	while(++i < power) result* = base;
	std::cout << result << endl;*/


	//---------------//-----------------//

	// ASCII-symbols in a line

	int i= 0;
	int n = 256;
	
	while (i < n)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i++ << " ";
		
	}
}		


