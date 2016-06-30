#include <iostream>
#include <vector>

using std::vector;
using std::cin; using std::cout; using std::endl;

int main()
{
	vector<int> ivec;
	int inum;

	while(cin >> inum)
	{
		ivec.push_back(inum);
	}

	for(decltype(ivec.size()) i = 0; i < ivec.size() - 1; ++i)
		cout << ivec[i] + ivec[i + 1] << " ";
	cout << endl;

	for(decltype(ivec.size()) j = 0; j < ivec.size(); ++j)
		cout << ivec[j] + ivec[ivec.size() - 1 - j] << " ";
	cout << endl;

	return 0;
}
