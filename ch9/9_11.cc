vector<string> svec;// default initialize empty
vector<string> svec2(svec);// copy
vector<string> svec3 = {"h", "e", "l", "l", "o"};// list initialize
vector<string> svec4(10);// ten empty string
vector<string> svec5(10, "h");// ten "h"
vector<string> svec6(svec.begin(), svec.end());// the same as svec
