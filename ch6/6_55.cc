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

vector<PFunc> fvec;
fvec.push_back(add);
fvec.push_back(minus);
fvec.push_back(multiply);
fvec.push_back(divide);
