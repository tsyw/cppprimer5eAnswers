#include <iostream>

int main()
{
	const int i = 42;
	auto j = i;//int
	const auto &k = i;//const reference
	auto *p = &i;//cvonst int *
	const auto j2 = i, &k2 = i;//j2: const int, k2: const reference

	return 0;
}
