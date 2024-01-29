#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <sstream>
# include <cctype>
# include <string>

class ScalarConverter {
	enum Type { NONE, CHAR, INT, FLOAT, DOUBLE };
public:
	Type detect(const std::string&);
	static void convert(const std::string&);
};

#endif
