# include "route.hpp"
# include <iostream>
#include "error.hpp"

void Router::set_command(std::string& command) {
	command_ = command;
}

bool Router::cmd_route (PhoneBook& book, size_t& index) {
	if (this->command_ == "ADD") {
		return (book.append(index));
	} else if (this->command_ == "SEARCH") {
		return (book.search());
	} else if (this->command_ == "EXIT") {
		return (book.exit());
	} else {
		return (error.setError(0, "Wrong input, try again!"), false);
	}
	return (true);
}