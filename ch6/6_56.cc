#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

int add(int i, int j)
{
	return i + j;
}

int minus(int i, int j)
{
	return i - j;
}

int multiply(int i, int j)
{
	return i * j;
}

int divide(int i, int j)
{
	return (j == 0) ? 0 : i / j;
}

using PFunc = int (*)(int, int);

vector<PFunc> fvec{add, minus, multiply, divide};

int main()
{
	cout << fvec[0](1, 2) << endl;
	cout << fvec[1](1, 2) << endl;
	cout << fvec[2](1, 2) << endl;
	cout << fvec[3](1, 2) << endl;

	return 0;
}
