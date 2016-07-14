void print(const int ia[10])// the definition of parameter is not good, should be const int (&ia)[10]
{
	for(size_t i = 0; i != 10, ++i)
		cout << ia[i] << endl;
}
