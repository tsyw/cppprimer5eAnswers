bool includeUpper(const string &s)
{
	for(auto its : s)
		if(isupper(its))
			return true;
	return false;
}

void toUpper(string &s)
{
	for(auto &its : s)
		its = tolower(its);
}
