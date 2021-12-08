#include "ExceptionSC.hpp"

ExceptionSC::ExceptionSC(const std::string &message) : message(message)
{
}

const char *ExceptionSC::what() const throw()
{
	return message.c_str();
}