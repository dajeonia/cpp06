#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string& arg)
{

}

ScalarConverter::Type	ScalarConverter::detect(const std::string& arg)
{
	if (arg.size() == 1)
		return (CHAR);
	else if (isInt(arg))
		return (INT);
	else if (arg == "nanf" || arg == "-inff" || arg == "+inff" || ...)
		return (FLOAT);
	else if (arg == "nan" || arg == "-inf" || arg == "+inf" || ...)
		return (DOUBLE);
}

bool	ScalarConverter::isInt(const std::string& arg)
{
	int pos(arg.find("+-"));

	if (pos == string::npos)
		pos = 0;
	return (arg.find_first_not_of("0123456789", pos) == string::npos)
}

bool	ScalarConverter::isFloat(const std::string& arg)
{
	int pos(arg.find("+-"));

	if (pos = arg.find_first_of("0123456789", pos) != npos)
}
