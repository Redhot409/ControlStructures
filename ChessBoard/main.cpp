//ChessBoard

#include <iostream>
#include <conio.h>
using namespace std;

//BITWISE_OPERATORS
//#define CHESS
//#define HARDCHESS_NOK
//#define HARDCHESS_OK
#define UPPER_LEFT_ANGLE      (char)218
#define UPPER_RIGHT_ANGLE      (char)191
#define LOWER_LEFT_ANGLE      (char)192
#define LOWER_RIGHT_ANGLE      (char)217
#define HORIZONTAL_LINE       (char)196 <<(char)196
#define VERTICAL_LINE         (char)179
#define WHITE_BOX             "\xDB\xDB"          //==(char)219<<(char)219
#define BLACK_BOX             "\x20\x20"       // это два пробела в ASCII; (char)32
// \x- позвол€ет включить в строку символ по ASCII-коду в 16-тиричной системе исчислени€.

void main()
{
	setlocale(LC_ALL, "");

#ifdef HARDCHESS_NOK
	int n;
	cout << "¬ведите размер шахматной доски : "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		//for (int j = 0; j < n; j++)
		{
			if ((j + i) % 2 == 0)
			{
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n; j++)cout << "*";
					//cout << endl;
				}
				//cout << "\n";
			}
			else
			{
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n; j++)cout << " ";
					//cout << endl;
				}
				//cout << "\n";
			}
		}
		cout << endl;
	}
#endif // HARDCHESS


	//int n;
	//cout << "введите размер шахматной доски : "; cin >> n;
#ifdef Chess
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			//else (i % 2 == j % 2) ? cout << WHITE_BOX : cout << "  "; // тернарный оператор
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);

		}
		cout << endl;
	}

	/*for (int i = 176; i < 226; i++)
	{


			if (( i) % 16 == 0)cout << endl;
			cout << i <<"\t" << else<<(char)icout << "\n";

	}*/
#endif // Chess

#ifdef HARDCHESS_OK
	int n;
	cout << "введите размер шахматной доски : "; cin >> n;
	for (int i = 0; i < n; i++)               //строка пол€ из квадратов
	{
		for (int j = 0; j < n; j++)           // строка из полосок * и "  "
		{
			for (int k = 0; k < n; k++)       //  номер полоски в строке из полосок
			{
				for (int l = 0; l < n; l++)   //  пор€дковый номер элемента маленькой полоски
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}
#endif  HARDCHESS_OK


	/*int n;
	cout << "¬ведите размер треугольника ѕаскал€ : "; cin >> n;
	/*for (int i = 0; i < n; i++)
	{ 
	
		for (int j = i; j < n; ++j)cout << " ";cout <<1;
		for (int j = 0; j < 2*i; ++j)cout <<" "; cout << 1;
		cout << endl;
	}
	cout << endl;*/

	//Hardcore_1

	/*for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			
			cout << (i / n & 1 ^ j / n & 1 ? "* " : "  ");
			//cout << ((i / n +j / n) % 2 ? "* " : "  ");
			//cout << ((i / n) % 2 == (j / n) % 2 ? "* " : "  ");

		}
		cout << endl;
	}*/
	// Bitwise operators
#ifdef BITWISE_OPERATORS
			char a, b;
cout << "¬ведите значение a = "; cin >> a;
cout << "¬ведите значение b = "; cin >> b;
  b ^= a ^= b ^= a;
 // 3	 2	  1  пор€док операций слева направо дл€ XOR
a = a ^ b; // 1
b = b ^ a; // 2
a = a ^ b; // 3
cout << "a = " <<a<< endl << "b = "<<b<<endl;
#endif // BITWISE_OPERATORS




}
