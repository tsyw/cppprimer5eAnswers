struct X
{
	X(int i, int j) : base(i), rem(base % j) { }// base is not defined, should be rem(i % j)
	int rem, base;
};
