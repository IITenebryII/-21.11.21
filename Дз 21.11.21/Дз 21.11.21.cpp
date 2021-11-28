#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main()
{
	/*
	for(int n = 1000;n<10000; n++)
	{
		if (n / 1000 != n / 100 % 10 && n / 1000 != n / 10 % 10 && n / 1000 != n % 10)
			if (n / 100 % 10 != n / 10 % 10 && n / 100 % 10 != n % 10)
				if( n / 10 % 10 != n % 10)
				cout << n << endl;

	}
	*/
	/*
	for (int n = 100; n < 1000; n++)
		if (pow(n / 100 % 10, 3) + pow(n / 10 % 10, 3) + pow(n % 10, 3) == n)
			cout << n << endl;
	*/
	/*
	int p = 1, a, n;
	cin >> a;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		p *= pow(a + i, 2);
	}
	cout << p << endl;
	*/
	/*
	int a, b;
	cin >> a;
	cin >> b;
	for (a; a < b + 1; a++)
	{
		if (a % 12 == 0)
		{
			cout << a <<endl;
		}
	}
	*/
	for (int i = 0; i < 21; i++)
	{
		if (i % 2 == 1)
		{
			for (int b = 1; b < i + 1; b++)
			{
				cout << b;
			}
			cout << endl;
		}
		
		else
		{
			cout << 11111;
			cout << endl;
		}
		
	}


	system("pause");
	return 0;
}