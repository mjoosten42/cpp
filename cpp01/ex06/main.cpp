#include "Harl.hpp"
#include <iostream>

enum	levels { NONE, DEBUG, INFO, WARNING, ERROR };

int	main( int argc, char **argv ) {
	std::string	levelNames[LEVELS] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	levels		level = NONE;
	Harl		harl;

	if (argc != 2) {
		std::cout << "Expected 1 argument, got " << argc - 1 << std::endl;
		return EXIT_FAILURE;
	}
	for (int i = 0; i < LEVELS; i++) {
		if (!levelNames[i].compare(argv[1]))
			level = (levels)(i + 1);
	}
	switch (level) {
		case NONE:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
		case DEBUG:
			harl.complain("DEBUG");
		case INFO:
			harl.complain("INFO");
		case WARNING:
			harl.complain("WARNING");
		case ERROR:
			harl.complain("ERROR");
	}
}
