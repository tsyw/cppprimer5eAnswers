#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1;//no values
	vector<int> v2(10);//10 values 0
	vector<int> v3(10, 42);//10 values of 42
	vector<int> v4{10};//one value 10
	vector<int> v5{10, 42};// two values 10 and 42
	vector<string> v6{10};//10 empty strings
	vector<string> v7{10, "hi"};//10 "hi"s

	cout << "v1: " << v1.size() << " ";
	for(auto i : v1)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "v2: " << v2.size() << " ";
	for(auto i : v2)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "v3: " << v3.size() << " ";
	for(auto i : v3)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "v4: " << v4.size() << " ";
	for(auto i : v4)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "v5: " << v5.size() << " ";
	for(auto i : v5)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "v6: " << v6.size() << " ";
	for(auto i : v6)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "v7: " << v7.size() << " ";
	for(auto i : v7)
	{
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
