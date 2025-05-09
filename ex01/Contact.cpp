#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

// Setter functions
void	Contact::setFirstName(const std::string &value)
{
	first_name = value;
}

void	Contact::setLastName(const std::string &value)
{
	last_name = value;
}

void	Contact::setPhoneNumber(const std::string &value)
{
	phone_number = value;
}

void	Contact::setNickName(const std::string &value)
{
	nick_name = value;
}

void	Contact::setDarkestSecret(const std::string &value)
{
	darkest_secret = value;
}

// Getter functions
std::string Contact::getFirstName() const
{
	return (first_name);
}

std::string Contact::getLastName() const
{
	return (last_name);
}

std::string Contact::getNickName() const
{
	return (nick_name);
}

std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}
