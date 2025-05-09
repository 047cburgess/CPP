#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class	Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(void); // Constructor
		~Contact(void); // Destructor
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;

		void	setFirstName(const std::string &value);
		void	setLastName(const std::string &value);
		void	setNickName(const std::string &value);
		void	setPhoneNumber(const std::string &value);
		void	setDarkestSecret(const std::string &value);
};

#endif
