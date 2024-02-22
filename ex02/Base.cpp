#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base::Base() { }

Base::~Base() { }

Base*	Base::generate(void)
{
	srand(time(NULL));
	switch (rand() % 3) {
	case 0:
		return (new A());
	case 1:
		return (new B());
	default:
		return (new C());
	}
}

void	Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "p: \"A\"" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "p: \"B\"" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "p: \"C\"" << std::endl;
}
void	Base::identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "p: \"A\"" << std::endl;
		return ;
	} catch (std::exception& e) { }
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "p: \"B\"" << std::endl;
		return ;
	} catch (std::exception& e) { }
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "p: \"C\"" << std::endl;
		return ;
	} catch (std::exception& e) { }
}
