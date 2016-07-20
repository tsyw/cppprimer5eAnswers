#ifndef EX7_32_H
#define EX7_32_H

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = vector<Screen>::size_type;
	inline void clear(ScreenIndex);
private:
	vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen
{
public:
	typedef std::string::size_type pos;
	friend void Window_mgr::clear(ScreenIndex);
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

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}

#endif