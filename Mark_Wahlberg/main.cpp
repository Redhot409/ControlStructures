//Shooter

#include <iostream>
#include <conio.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	char key;
	
	while (true)
	{
		key = _getch();
		switch (key)
		{
		case ('w'): cout << "w" << " - " << "вперед" << endl; break;
		case ('s'): cout << "s" << " - " << "назад" << endl; break;

		case ('d'): cout << "d" << " - " << "вправо" << endl; break;

		case ('a'): cout << "a" << " - " << "влево" << endl; break;

		case (' '): cout << "Space" << " - " << "прыжок" << endl; break;

		case (13): cout << "Enter" << " - " << "огонь" << endl; break;

		case (27): cout << "Escape" << " - " << "выход" << endl; break;
		}
	}
 }