#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	a = 42;//int
	b = 42;//int
	c = 42;//int
	d = 42;//error
	e = 42;//error
	g = 42;//error

	std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << " " << std::endl;

	return 0;
}
