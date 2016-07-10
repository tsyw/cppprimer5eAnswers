#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	unsigned vowelCnt = 0;
	char ch;
	while(cin >> ch)
	{
		if(ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u')
			++vowelCnt;
	}
	cout << "vowelCnt = " << vowelCnt << endl;

	return 0;
}
