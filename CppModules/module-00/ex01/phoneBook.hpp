#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iomanip>

const int MAX_CONT_COUNT = 8;

class PhoneBook
{
	private:
		size_t	size_;
		Contact c1[MAX_CONT_COUNT];
	public:
		PhoneBook();
		bool append(size_t& index);
		bool search();
		bool exit();
	private:
		bool input_reader(size_t index, std::string in_type, std::string wer_type);
		bool input_phone_number(size_t index, std::string in_type, std::string wer_type);
		void update_offset(size_t& index);
		bool parse_string(std::string str);
		bool parce_number(std::string str);
		bool space_case(std::string str);
		void make_word(std::string &print, std::string str2);
};

#endif