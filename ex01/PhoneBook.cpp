#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <iostring>

// mini constructor initialisation list
PhoneBook::PhoneBook() : contact_count(0), index(0) {}

// Add a new contact to phonebook
void	Phonebook::addContact()
{
	Contact	new_contact;
	std::string	user_input;

	std::cout << "Enter first name: ";
	std::getline(std:icn, user_input);
	if (user_input.empty())
	{
		std::cout << "Error: Empty field." << std::endl;
		return;
	}
	new_contact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	if (user_input.empty())
	{
		std::cout << "Error: Empty field." << std::endl;
		return;
	}
	new_contact.setLastName(user_input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	if (user_input.empty())
	{
		std::cout << "Error: Empty field." << std::endl;
		return;
	}
	new_contact.setPhoneNumber(user_input);

	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, input);
	if (user_input.empty())
	{
		std::cout << "Error: Empty field." << std::endl;
		return;
	}
	new_contact.setDarkestSecret(user_input);

	// save finished contact to the phonebook
	contacts[index] = new_contact;
	if (contact_count < MAX_CONTACTS)
	{
		contact_count++;
		index++;
	}
	else
		index = 0;
	std::count << "Contact added" << std::endl;
}

void	PhoneBook::displayContacts() const
{
	// Print the table headers
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std:: setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname"

	// Display all the contacts
	for (int i = 0; i < contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|"
		<< std::setw(10) << truncateField(contacts[i].getFirstname()) << "|"
		<< std::setw(10) << truncateField(contacts[i].getLastname()) << "|"
		<< std::setw(10) << truncateField(contacts[i].getNickname()) << std::endl;
	}
}

void	PhoneBook::displayContactindex(int index) const
{
	// Check if the given index is valid
	if (index < 0 || index >= contact_count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}

	// Print the details of the valid index
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
}

int	PhoneBook::getContactCount() const
{
	return (contact_count);
}




