int main()
{
	int i = 10;
	int *ri = &i;
	int j = 12;

	*ri = 11;
	ri = &j;

	return 0;
}
