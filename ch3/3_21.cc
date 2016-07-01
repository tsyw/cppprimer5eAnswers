#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::endl; using std::cin;
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
	auto itvec1Beg = v1.cbegin(), itvec1End = v1.cend();
	auto itvec2Beg = v2.cbegin(), itvec2End = v2.cend();
	auto itvec3Beg = v3.cbegin(), itvec3End = v3.cend();
	auto itvec4Beg = v4.cbegin(), itvec4End = v4.cend();
	auto itvec5Beg = v5.cbegin(), itvec5End = v5.cend();
	auto itvec6Beg = v6.cbegin(), itvec6End = v6.cend();
	auto itvec7Beg = v7.cbegin(), itvec7End = v7.cend();

	cout << itvec1End - itvec1Beg << ": ";
	for(auto i = itvec1Beg; i != itvec1End; ++i)
		cout << *i << " ";
	cout << endl;

	cout << itvec2End - itvec2Beg << ": ";
	for(auto i = itvec2Beg; i != itvec2End; ++i)
		cout << *i << " ";
	cout << endl;

	cout << itvec3End - itvec3Beg << ": ";
	for(auto i = itvec3Beg; i != itvec3End; ++i)
		cout << *i << " ";
	cout << endl;

	cout << itvec4End - itvec4Beg << ": ";
	for(auto i = itvec4Beg; i != itvec4End; ++i)
		cout << *i << " ";
	cout << endl;

	cout << itvec5End - itvec5Beg << ": ";
	for(auto i = itvec5Beg; i != itvec5End; ++i)
		cout << *i << " ";
	cout << endl;

	cout << itvec6End - itvec6Beg << ": ";
	for(auto i = itvec6Beg; i != itvec6End; ++i)
		cout << *i << " ";
	cout << endl;

	cout << itvec7End - itvec7Beg << ": ";
	for(auto i = itvec7Beg; i != itvec7End; ++i)
		cout << *i << " ";
	cout << endl;

	return 0;
}
