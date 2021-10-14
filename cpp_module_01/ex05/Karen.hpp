#ifndef KAREN_HPP
# define KAREN_HPP


#include <iostream>

class Karen
{

public:

	Karen();
	~Karen();
	void	complain(std::string level);

private:

	void	voiddebug(void);
	void	voidinfo(void);
	void	voidwarning(void);
	void	voiderror(void);
};




#endif
