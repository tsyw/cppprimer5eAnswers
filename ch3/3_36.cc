#include <iostream>
#include <vector>
#include <cstddef>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::size_t;

int main()
{
	int arry1[10], arry2[10];
	vector<int> ivec1(10), ivec2(10);
	bool bi = false;

	for(auto &iarry1 : arry1)
		cin >> iarry1;
	for(auto &iarry2 : arry2)
		cin >> iarry2;
	for(size_t i = 0; i != 10; ++i)
	{
		if(arry1[i] != arry2[i])
			bi = true;
	}
	if(bi)
		cout << "not equal!" << endl;
	else
		cout << "equal" << endl;

	for(auto &it : ivec1)
		cin >> it;
	for(auto &it2 : ivec2)
		cin >> it2;
	if(ivec1 == ivec2)
		cout << "equal!" << endl;
	else
		cout << "not equal!" << endl;

	return 0;
}
