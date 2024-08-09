#ifndef ROUTE_HPP
# define ROUTE_HPP

#include "phoneBook.hpp"

class Router
{
	private:
		std::string command_;
	public:
		void set_command(std::string& command);
		bool cmd_route(PhoneBook& book, size_t& index);
};

#endif