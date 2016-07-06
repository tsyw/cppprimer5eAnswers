#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	int grade = 0;
	while(cin >> grade)
	{
		cout << ((grade > 90) ? "high pass" 
							  : (grade > 75) ? "pass"
							  				 : (grade < 60) ? "fail" : "low pass") << endl;
		if(grade > 90)
			cout << "high pass" << endl;
		else
			if(grade > 75)
				cout << "pass" << endl;
			else 
				if(grade < 60)
					cout << "fail" << endl;
				else
					cout << "low pass" << endl;
	}

	return 0;
}
