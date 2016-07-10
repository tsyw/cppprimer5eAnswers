#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	unsigned vowelCnt = 0;
	char ch;
	while(cin >> ch)
	{
		switch(ch)
		{
			case 'a': case 'e': case 'i': case 'o': case 'u':
			case 'A': case 'E': case 'I': case 'O': case 'U':
				++vowelCnt;
				break;
		}
	}
	cout << "vowelCnt = " << vowelCnt << endl;

	return 0;
}
