# include "route.hpp"
# include <iostream>
#include "error.hpp"

const char* _ADD = "ADD";
const char* _SEARCH = "SEARCH";
const char* _EXIT = "EXIT";

void Router::set_command(std::string& command) {
	command_ = command;
}

bool Router::cmd_route (PhoneBook& book, size_t& index) {
	if (this->command_ == _ADD) {
		return (book.append(index));
	} else if (this->command_ == _SEARCH) {
		return (book.search());
	} else if (this->command_ == _EXIT) {
		return (book.exit());
	} else {
		return (error.setError(0, "Wrong input, try again!"), false);
	}
	return (true);
}