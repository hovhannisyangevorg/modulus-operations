#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	name; 
		std::string	surname;
		std::string	nickname;
		std::string	secret;
		std::string number;
	public:
		void set_name(const std::string& name);
		void set_surname(const std::string& surname);
		void set_nickname(const std::string& nickname);
		void set_secret(const std::string& secret);
		void set_number(const std::string& number);

		std::string get_name() const;
		std::string get_surname() const;
		std::string get_nickname() const;
		std::string get_secret() const;
		std::string get_number() const;
};

#endif