#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

const char* NAME_EXPR = "input name: ";
const char* SUR_NAME_EXPR = "input surname: ";
const char* NICK_NAME_EXPR = "input nickname: ";
const char* SECRET_EXPR = "input darkest secret: ";
const char* NUMBER_EXPR = "input phone number: ";

class Contact
{
	private:
		std::string	name; 
		std::string	surname;
		std::string	nickname;
		std::string	secret;
		std::string number;
	public:
		// Setter methods prototype
		void set_name(const std::string& name);
		void set_surname(const std::string& surname);
		void set_nickname(const std::string& nickname);
		void set_secret(const std::string& secret);
		void set_number(const std::string& number);

		// Getter methods prototype
		std::string get_name() const;
		std::string get_surname() const;
		std::string get_nickname() const;
		std::string get_secret() const;
		std::string get_number() const;
};

#endif