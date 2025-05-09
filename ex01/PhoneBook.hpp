#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int	contact_count;
		int	index;
		std::string truncate(const std::string &str) const;

	public:
		PhoneBook Phonebook();
		void	addContact();
		void	displayContacts() const;
		void	displayContactIndex(int index) const;
		int	getContactCount() const;
};

#endif
