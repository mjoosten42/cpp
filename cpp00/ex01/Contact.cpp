#include <iomanip>
#include <iostream>
#include "Contact.hpp"

#define WHITESPACE " \t\n\v\f\r"

std::string	getPhoneNumber( std::string prompt);
std::string getField( std::string prompt );
bool		isValid( std::string number );
void 		print( std::string str );

void	Contact::New( void ) {
	firstname = getField("First name: ");
	lastname = getField("Last name: ");
	nickname = getField("Nickname: ");
	phonenumber = getPhoneNumber("Phone number: ");
	darkest_secret = getField("Darkest secret: ");
	std::cout << BLUE "\tContact added" DEFAULT << std::endl;
}

void	Contact::Display( void ) {
	std::cout << "|";
	print(firstname);
	std::cout << "|";
	print(lastname);
	std::cout << "|";
	print(nickname);
	std::cout << "|" << std::endl;
}

void print( std::string str ) {
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	Contact::DisplayFull( void ) {
	std::cout << BLUE "First name: " DEFAULT << firstname << std::endl;
	std::cout << BLUE "Last name: " DEFAULT << lastname << std::endl;
	std::cout << BLUE "Nickname: " DEFAULT << nickname << std::endl;
	std::cout << BLUE "Phone number: " DEFAULT << phonenumber << std::endl;
	std::cout << BLUE "Darkest secret: " DEFAULT << darkest_secret << std::endl;
}

std::string getField( std::string prompt ) {
	std::string	input;
	size_t		pos;

	do {
		std::cout << BLUE << prompt << DEFAULT;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		pos = input.find_first_not_of(WHITESPACE);
	}
	while (std::cin.fail() || pos == input.npos);
	input.erase(0, pos);
	input.erase(input.find_last_not_of(WHITESPACE) + 1);
	pos = input.find_first_of('\t');
	while (pos != input.npos) {
		input.replace(pos, 1, "    ");
		pos = input.find_first_of('\t');
	}
	return (input);
}

std::string	getPhoneNumber( std::string prompt) {
	std::string	number;

	std::cout << BLUE << prompt << DEFAULT;
	std::getline(std::cin, number);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	while (std::cin.fail() || !isValid(number)) {
		std::cout  << BLUE << prompt << DEFAULT;
		std::getline(std::cin, number);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
	}
	return (number);

}

bool	isValid( std::string number ) {
	if (number.find_first_of("+0123456789") != 0)
		return false;
	if (number.find_first_not_of(" 0123456789", 1) != number.npos)
		return false;
	return true;
}