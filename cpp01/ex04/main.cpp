#include <iostream>
#include <fstream>
#include <string>

std::string	replaceLine(std::string line, char **argv);

int	main(int argc, char **argv) {
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		replace;
	std::string 	line;

	if (argc != 4) {
		std::cerr << "Expected 3 arguments, got " << argc - 1 << std::endl;
		return EXIT_FAILURE;
	}
	infile.open(argv[1]);
	if (!infile.is_open()) {
		perror(argv[1]);
		return EXIT_FAILURE;
	}
	replace = (std::string)argv[1] + ".replace";
	outfile.open(replace, std::ios::out);
	if (!outfile.is_open()) {
		perror(replace.c_str());
		infile.close();
		return EXIT_FAILURE;
	}
	while (std::getline(infile, line)) {
		outfile << replaceLine(line, argv) << std::endl;
	}
}

std::string	replaceLine(std::string line, char **argv) {
	size_t	pos = line.find(argv[2]);
	size_t	len1 = strlen(argv[2]);
	size_t	len2 = strlen(argv[3]);

	while (pos != std::string::npos) { 
		std::string	leftover = line.substr(pos + len1);
		line.resize(pos);
		line += argv[3];
		line += leftover;
		pos = line.find(argv[2], pos + len2);
	}
	return line;

}