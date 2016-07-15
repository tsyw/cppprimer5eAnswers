using sarT = string[10]
sarT &func(sarT &strs);//I like this version.

auto func(string (&s)[10]) -> string (&)[10];

string strs[10];
decltype(strs) &func(string (&s)[10]);
