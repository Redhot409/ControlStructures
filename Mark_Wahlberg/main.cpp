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
		case ('w'): cout << "w" << " - " << "������" << endl; break;
		case ('s'): cout << "s" << " - " << "�����" << endl; break;

		case ('d'): cout << "d" << " - " << "������" << endl; break;

		case ('a'): cout << "a" << " - " << "�����" << endl; break;

		case (' '): cout << "Space" << " - " << "������" << endl; break;

		case (13): cout << "Enter" << " - " << "�����" << endl; break;

		case (27): cout << "Escape" << " - " << "�����" << endl; break;
		}
	}
 }