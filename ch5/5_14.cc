#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	string word, preword = "";
	int sameCnt = 1, preCnt = 1;
	bool existSame = false;
	int maxSame = 1;
	string maxWord;

	while(cin >> word)
	{
		if(word == preword)
			++sameCnt;
		else
		{
			preCnt = sameCnt;
			sameCnt = 1;
			if(1 != preCnt)
			{
				if(preCnt > maxSame)
				{
					maxSame = preCnt;
					maxWord = preword;
				}
				existSame = true;
			}
		}
		preword = word;
	}
	if(1 != sameCnt)
	{
		if(preCnt > maxSame)
		{
			maxSame = preCnt;
			maxWord = preword;
		}
		existSame = true;
	}
	if(!existSame)
		cout << "no same!" << endl;
	else
		cout << maxWord << ": " << maxSame << endl;

	return 0;
}
