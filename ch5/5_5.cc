#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

int main()
{
 	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
 	string lettergrade;
 	int grade;
 	while(cin >> grade)
 	{
 		try
 		{
 			if(grade > 100 || grade < 0)
 			{
 				throw runtime_error{"NOT A LEGAL GRADE(GRADE MUST BE AMONG 0 to 100)"};
 			}
 		}
 		catch(runtime_error err)
 		{
 			cout << err.what() << "\nENTER A NEW GRADE? ";
 			char c;
 			cin >> c;
 			if(!cin || c == 'n')
 				break;
 			else
 				continue;
 		}
 		if(grade < 60)
 		{
 			lettergrade = scores[0];
 		}
 		else
 		{
 			lettergrade = scores[(grade - 50) / 10];
 			if(grade != 100)
 			{
 				if(grade % 10 > 7)
	 			{
 					lettergrade += "+";
 				}
 				else if(grade % 10 < 3)
 					lettergrade += "-";
 			}
 		}
 		cout << lettergrade << endl;
 	}

 	return 0;
 }
