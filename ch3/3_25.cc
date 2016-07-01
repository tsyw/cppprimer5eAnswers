#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	vector<int> scores(11, 0);
	unsigned grade;
	auto scoresIT = scores.begin();

	while(cin >> grade)
	{
		if(grade <= 100)
		{
			++(*(scoresIT + (grade / 10)));
		}
	}

	for(;scoresIT != scores.end(); ++scoresIT)
		cout << *scoresIT << " ";
	cout << endl;

	return 0;
}
