//Functions
#include<iostream>
using namespace std;


int Add(int a, int b, int c = 0);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Factorial(int n);
double Power(double a, int n);


void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}

int Add(int a, int b, int c)
{
	int sum = a + b + c;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
int Factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, int n)
{
	
	return 0;
}
