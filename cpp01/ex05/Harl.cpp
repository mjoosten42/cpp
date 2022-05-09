#include "Harl.hpp"
#include <iostream>

typedef void (Harl::*HarlFPtr)(void);

void	Harl::complain ( std::string level ) {
	HarlFPtr	f[LEVELS] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};	
	std::string	levels[LEVELS] = { "DEBUG", "INFO", "WARNING", "ERROR" };
 
	for (int i = 0; i < LEVELS; i++)
		if (!level.compare(levels[i]))
			(this->*f[i])();
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger.\n";
	std::cout << "I really do!\n\n";
};

void	Harl::info( void ) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
};

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n\n";
};

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable!\n";
	std::cout << "I want to speak to the manager now.\n\n";
};
