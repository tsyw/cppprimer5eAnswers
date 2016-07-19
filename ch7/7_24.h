#ifndef EX7_24_H
#define EX7_24_H

class Screen
{
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * width, c) { }
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { } 
	char get() const
	{
		return contents[cursor];
	}
	char get(pos ht, pos wd) const
	{
		return contents[ht * width + wd];
	} 
	Screen &move(pos r, pos c)
	{
		cursor = r * width + c;
		return *this;
	}

private:
	pos cursor == 0;
	pos henght = 0, width = 0;
	std::string contents;
};

#endif
