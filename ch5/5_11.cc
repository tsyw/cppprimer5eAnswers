#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
	unsigned vowelCnt = 0, spaceCnt = 0, newlineCnt = 0, tabCnt = 0;
	char ch;
	while(cin >> std::noskipws >> ch)//used std::noskipws
	{
		switch(ch)
		{
			case 'a': case 'e': case 'i': case 'o': case 'u':
			case 'A': case 'E': case 'I': case 'O': case 'U':
				++vowelCnt;
				break;
			case ' ': ++spaceCnt; break;
			case '\t': ++tabCnt; break;
			case '\n': ++newlineCnt; break;
			default: break;
		}
	}
	cout << "vowelCnt = " << vowelCnt << endl;
	cout << "newlineCnt = " << newlineCnt << endl;
	cout << "tabCnt = " << tabCnt << endl;
	cout << "spaceCnt = " << spaceCnt << endl;

	return 0;
}
