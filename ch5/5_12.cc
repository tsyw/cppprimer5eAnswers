#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()//I use goto-statement in this function, it is not good, see better: https://github.com/pezy/CppPrimer/blob/master/ch05/ex5_12.cpp
{
	unsigned vowelCnt = 0, spaceCnt = 0, newlineCnt = 0, tabCnt = 0, fiCnt = 0, ffCnt = 0, flCnt = 0;
	char ch, prech;
	while(cin >> std::noskipws >> ch)//used std::noskipws
	{
begin:	switch(ch)
		{
      		case 'f':
			{
				cin >> std::noskipws >> prech;
				switch(prech)
				{
					case 'i': ++fiCnt; break;
					case 'f': ++ffCnt; break;
					case 'l': ++flCnt; break;
				}
				ch = prech;
				goto begin;
			}
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
	cout << "fiCnt = " << fiCnt << endl;
	cout << "ffCnt = " << ffCnt << endl;
	cout << "flCnt = " << flCnt << endl;

	return 0;
}
