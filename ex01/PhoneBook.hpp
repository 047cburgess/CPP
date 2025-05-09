#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

#define MAX_CONTACTS 8
#define MAX_FIELD_LENGTH 10

std::string truncateField(const std::string &str);

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int	contact_count;
		int	index;
		std::string truncate(const std::string &str) const;

	public:
		PhoneBook();
		void	addContact();
		void	displayContacts() const;
		void	displayContactIndex(int index) const;
		int	getContactCount() const;
		void	searchContact() const;
};

#endif
