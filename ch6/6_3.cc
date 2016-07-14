int fact(const int &val)
{
	return (1 == val || 0 == val) ? 1 : fact(val - 1) * val;
}
