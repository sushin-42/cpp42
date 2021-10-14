#include "Karen.hpp"


void	Karen::complain(std::string level)
{
	void		(Karen::*callFunc[4])(void) = {&Karen::voiddebug, &Karen::voidinfo, &Karen::voidwarning, &Karen::voiderror};
	void		(Karen::*ptrFunc)(void);
	std::string	findLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	*findLevelPtr = std::find(findLevel, findLevel + (sizeof(findLevel) / sizeof(findLevel[0])), level);

	if (findLevelPtr == findLevel + (sizeof(findLevel) / sizeof(findLevel[0])))
	{
		std::cout << " No data " << std::endl;
		return ;
	}
	std::cout << "\""<< level << "\"" << " level" << std::endl;
	ptrFunc = callFunc[findLevelPtr - findLevel];
	(this->*ptrFunc)();
}

Karen::Karen()
{
	std::cout << "karan constructor" << std::endl;
}

Karen::~Karen()
{
	std::cout << "karan de_constructor" << std::endl;
}

void	Karen::voiddebug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::voidinfo(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::voidwarning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::voiderror(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
