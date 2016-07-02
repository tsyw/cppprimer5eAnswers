#include <iostream>
#include <string>
#include <cstring>

using std::cout; using std::endl;
using std::string;
using std::strcmp;

int main()
{
	string str1 = "hello", str2 = "hello2";
	if(str1 < str2)
		cout << "str1 < str2" << endl;
	else
		cout << " str2 >= str1" << endl;

	char arr1[] = "hello", arr2[] = "hello2";
	if(strcmp(arr2, arr1) > 0)
		cout << "arr1 < arr2" << endl;
	else
		cout << "arr2 >= arr1" << endl;

	return 0;
}
