// (a) if(ival1 != ival2)
// 		ival1 = ival2//need a semicolon
// 	else ival1 = ival2 = 0;
// (b) if(ival < minval)
// 		minval = ival;
// 		occurs = 1;//we need a curly brace here
// (c) if(int ival = get_value())
// 		cout << "ival = " << ival << endl;
// 	if(!ival)
// 		cout << "ival = 0\n";//ival is not defined in the second if-statement
// (d) if(ival = 0)
// 		ival = get_value();//this will be always false, should be changed to ival == 0
