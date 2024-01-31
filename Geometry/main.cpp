// Geometry

#include <iostream>
using namespace std;

//#define FIVE_STAR_ROWS
//#define ONE_TO_FIVE_STAR_ROWS_PART_1
//#define FIVE_TO_ONE_STAR_ROWS_PART_1
//#define FIVE_TO_ONE_STAR_ROWS_PART_2
//#define ONE_TO_FIVE_STAR_ROWS_PART_2
//#define RHOMB

void main()
{
	setlocale(LC_ALL, "");

	 //FIVE Star rows

	int n,i,j;
	cout << "Введите количество звездочек: "; cin >> n;

#ifdef FIVE_STAR_ROWS 	
	for (int i = 1; i <= n; i++)
	{
		for (int i = 1; i <= n; i++)
		{
			
		cout << "*";
		
		}
		cout << endl;
	}
#endif

	// ONE to FIVE Star rows

#ifdef ONE_TO_FIVE_STAR_ROWS_PART_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}		
		cout << endl;
				
	}
#endif

	//FIVE to ONE Star rows part_1

#ifdef FIVE_TO_ONE_STAR_ROWS_PART_1

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{		
		 cout << "* ";	
		}							
		cout << endl;
	}
#endif

	//FIVE to ONE Star rows part_2

#ifdef FIVE_TO_ONE_STAR_ROWS_PART_2

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++) // for (int i=0;i<n;i++)
		 {						//   for (int j=0;j<i;j++)cout <<"  ";
			if (j >= i)         //   for (int j=i;j<n;j++)cout <<" * ";
			{					//  cout <<endl;
				cout << "*";
			}
			else if (j < i)
			{
				cout << " ";
			}
			if (j == 5)
			{
				cout << endl;
			}
		 }
	}
#endif

	//ONE to FIVE Star rows part_2

#ifdef ONE_TO_FIVE_STAR_ROWS_PART_2
	for (i = 5; i >= 1; i--)			// for (int i=0;i<n;i++)
	{									//   for (int j=i;j<n-1;j++)cout <<"  ";
		for (j = 1; j <= 5; j++)		//   for (int j=0;j<=i;j++)cout <<" * ";
		{								// cout <<endl;			
			if (j < i)
			{
				cout << " ";
			}
			else if (j > i)
			{
				cout << "*";
			}
			if (j == 5)
			{
				cout << "*" << endl;
			}
		}
	}
#endif

	// Rhomb

#ifdef RHOMB
	for (i = 1; i <= 10; i++)					// for (int i= 0;i<n;i++)
												//	for(int j=1; j<n;j++)cout<< " ";cout<<"/";
	{											//	for(int j=0; j<i;j*2)cout<< " ";cout<<"\\";
		if (i <= 5)								// cout <<endl;
		{										// for (int i= 0;i<n;i++)
			for (j = 1; j <= 5; j++)			//	for(int j=0; j<=i;j++)cout<< " ";cout<<"\\";
			{									//	for(int j=0; j<(n-1-i)*2;j++)cout<< " ";cout<<"/";
				if (j == 6 - i)					// cout <<endl;
				{
					cout << "/";
				}
				else if (j != 6 - i)
				{
					cout << " ";
				}
			}
			for (j = 6; j <= 10; j++)
			{
				if (j == i + 5)
				{
					cout << "\\";
				}
				else if (j != i +5)
				{
					cout << " ";
				}
				if (j == 10)
				{
					cout << endl;
				}
			}
			
		}
		if (i > 5)
		{
			for (j = 1; j <= 5; j++)
			{
				if (j == i - 5)
				{
					cout << "\\";
				}
				else if (j != i - 5)
				{
					cout << " ";
				}
			}
			for (j = 6; j <= 10; j++)
			{
				if (j == 16 - i)
				{
					cout << "/";
				}
				else if (j != 16 - i)
				{
					cout << " ";
				}
				if (j == 10)
				{
					cout << endl;
				}
			}

		}
	}
#endif









	// plus-minus


	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 25; j++)
		{
			if (j % 2 == 0) cout << " - ";
			else if (j % 2 != 0) cout << " + ";
		 					
			if (j % 5 == 0) cout<< "\n" << endl; i++;
		}

	}
	cout << "easy";
}