using arrT = int[5];

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

arrT &arrptr(int i)
{
	return (i % 2) ? odd : even;
}
