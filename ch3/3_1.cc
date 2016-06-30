#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int cnt = 50, sum = 0;

	while(cnt <= 100)
	{
		sum += cnt;
		++cnt;
	}

	cout << "sum = " << sum << endl;

	return 0;
}
