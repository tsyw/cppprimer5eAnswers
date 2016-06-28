int main()
{
	int i = 42;
	int *pi = &i;

	*pi = *pi * *pi;//make i be i^2

	return 0;
}
