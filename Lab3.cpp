// Jon Caldwell
// Lab 3 
// COSC 2030
// Oct 1, 2018

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

short shortSum(short val);
long longSum(long val);
float floatFact(float val);
double doubleFact(double val);
float floatRecip(float val);

int main()
{
	short n = 0;
	cout << "Enter a number that will be summed to n (n>=1)  ";
	cin >> n;

	cout << "\nShort Sum: " << shortSum(n) << "\n\n";

	long n2 = 0;
	cout << "Enter a number that will be summed to n (n>=1)  ";
	cin >> n2;

	cout << "\Long Sum: " << longSum(n2) << "\n\n";

	float n3 = 0;
	cout << "Enter a number that will be summed to n (n>=1)  ";
	cin >> n3;

	cout << "\Float Factorial: " << floatFact(n3) << "\n\n";

	double n4 = 0;
	cout << "Enter a number that will be summed to n (n>=1)  ";
	cin >> n4;

	cout << "\nDouble Factorial: " << doubleFact(n4) << "\n\n";

	float n5 = 0;
	cout << "Enter a number that will be summed to n (n>=1)  ";
	cin >> n5;

	cout << "\nFloat Reciprocal: " << floatRecip(n5) << "\n\n";

	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	system("pause");
}
short shortSum(short val)
{
	if (val >= 1)
	{
		short sum = 0;
		for (short i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}

long longSum(long val)
{
	if (val >= 1)
	{
		long sum = 0;
		for (long i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}


float floatFact(float val)
{
	if (val >= 1)
	{
		float sum = 1;
		for (long i = 1; i <= val; i++)
		{
			sum *= i;
		}
		return sum;
	}
	return 0;
}

double doubleFact(double val)
{
	if (val >= 1)
	{
		double sum = 1;
		for (long i = 1; i <= val; i++)
		{
			sum *= i;
		}
		return sum;
	}
	return 0; 
}

float floatRecip(float val)
{
	if (val >= 1)
	{
		float sum = 0;
		for (float i = 1; i <= val; i++)
		{
			sum += 1 / i;
		}
		return sum - 1;
	}
	return 0;
}
