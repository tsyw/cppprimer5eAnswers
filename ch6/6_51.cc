#include <iostream>

using std::cout; using std::endl;

void f(int)
{
	cout << "I'm f(int)" << endl;
}

void f(int, int)
{
	cout << "I'm f(int, int)" << endl;
}

void f(double)
{
	cout << "I'm f(double)" << endl;
}

void f(double, double = 3.14)
{
	cout << "I'm f(double, double)" << endl;
}

int main()
{
	//f(2.56, 42);// error
	f(42);
	f(42, 0);
	f(2.56, 3.14);

	return 0;
}
