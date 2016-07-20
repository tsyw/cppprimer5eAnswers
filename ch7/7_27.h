#ifndef EX7_27_H
#define EX7_27_H

class Screen
{
public:
	typedef std::string::size_type pos;
	Screen &set(char c)
	{
		contents[cursor] = c;
		return *this;
	}
	Screen &set(pos r, pos col, char c)
	{
		contents[r * width + col] = c;
		return *this;
	}
	Screen &display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}
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
	void do_display(std::ostream &os) const
	{
		os << contents;
	}
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

#endif
