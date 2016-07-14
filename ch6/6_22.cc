void swapPInt(int *&pint1, int *&pint2)
{
	int *tmp = pint1;
	pint1 = pint2;
	pint2 = tmp;
}
