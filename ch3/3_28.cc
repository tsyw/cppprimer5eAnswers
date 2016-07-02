#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::string;
using std::vector;

string sa[10];//empty
int ia[10];//zero

int main()
{
	string sa2[10];//empty
	int ia2[10];//undefined
	vector<int> ivec(10);//defined as 10 zeros

	for(auto i : ia2)
		cout << i << " ";
	cout << endl;

	for(auto i : ivec)
		cout << i << " ";
	cout << endl;
}
