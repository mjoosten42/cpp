#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"

unsigned int	readNumber( std::string prompt, int added );

void	PhoneBook::Add( void ) {
	static int	pos;

	if (added < CONTACTS_MAX)
		added++;
	list[pos].New();
	pos++;
	if (pos == CONTACTS_MAX)
		pos = 0;
}

void	PhoneBook::Search( void ) {
	unsigned int	index;

	if (added == 0) {
		std::cout << RED "\tNo contacts to display" DEFAULT << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < added; i++) {
		std::cout << "|" << std::setw(10) << i;
		list[i].Display();
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	index = readNumber(GREEN "Enter an index: " DEFAULT, added - 1);
	if ((int)index > added - 1)
		std::cout << BLUE "Index too high" DEFAULT << std::endl;
	else
		list[index].DisplayFull();
}

unsigned int	readNumber( std::string prompt, int added ) {
	unsigned int	number;

	std::cout << prompt;
	std::cin >> number;
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	while (std::cin.fail() || (int)number > added) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << prompt;
		std::cin >> number;
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (number);
}