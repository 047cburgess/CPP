#include "PhoneBook.hpp"
#include <iostream>
#include <string>

// TODO: SEARCH -> display specific index ->atoi and isdigit checks etc
// Public/private
// this vs not this
// ctrl-d checks?
int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			return (0);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
	}
}
