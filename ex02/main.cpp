#include "Base.hpp"
#include <iostream>

void	leaks(void)
{
	system("leaks -q a.out");
}
int	main(void)
{
	atexit(leaks);

	Base* bp(Base::generate());
	Base& br(*bp);

	std::cout << "======== pointer ========" << std::endl;
	Base::identify(bp);
	std::cout << "======= reference =======" << std::endl;
	Base::identify(br);

	std::cout << "========= leaks =========" << std::endl;
	delete bp;

	return (0);
}

