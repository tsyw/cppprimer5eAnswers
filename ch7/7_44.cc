class Nodefault
{
public:
	Nodefault(int i) : ival(i) { }

private:
	int ival;
};

std::vector<NoDefault> vec(10);// illegal, have no default construction function
