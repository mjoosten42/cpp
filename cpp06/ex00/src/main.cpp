#include <iostream>
#include <cmath>
#include "scalar.hpp"

std::string	readScalar(std::string& input, char* c, int* i, float* f, double* d);

int	main(int argc, char **argv) {
	std::string	err;
	char		c;
	int			i;
	float		f, f_intpart;
	double		d, d_intpart;

	if (argc != 2 || !*argv[1]) {
		std::cerr << "usage: ./convert [scalar]\n";
		return EXIT_FAILURE;
	}
	std::string str(argv[1]);

	err = readScalar(str, &c, &i, &f, &d);
	std::cout << "char: " ;
	if (!err.empty() || i < 0 || i > 256)
		std::cout << "impossible\n";
	else if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable\n";

	std::cout << "int: ";
	if (!err.empty() || (i == INT_MIN && str.compare("-2147483648") != 0))
		std::cout << "impossible\n";
	else
		std::cout << i << std::endl;

	std::cout << "float: " << f;
	if (modff(f, &f_intpart) == 0)
		std::cout << ".0";
	std::cout<< "f\n";
	
	std::cout << "double: " << d;
	if (modf(d, &d_intpart) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

std::string	readScalar(std::string& input, char* c, int* i, float* f, double* d) {
	std::string	err;
	e_scalar	_type = getType(input);

	switch (_type) {
		case CHAR:
			*c = input.front();
			*i = static_cast<int>(*c);
			*f = static_cast<float>(*c);
			*d = static_cast<double>(*c);
			break;
		case INT:
			try	{
				*i = std::stoi(input);
			}
			catch(const std::out_of_range& e) {
				std::cerr << "overflow: " << input << std::endl;
				exit(EXIT_FAILURE);
			}
			catch(const std::exception& e) {
				err = e.what();
			}
			*c = static_cast<char>(*i);
			*f = static_cast<float>(*i);
			*d = static_cast<double>(*i);
			break;
		case FLOAT:
			*f = std::stof(input);
			if (std::isnan(*f) || std::isinf(*f))
				err = "nan/inf";
			*c = static_cast<char>(*f);
			try	{
				*i = static_cast<int>(*f);
			}
			catch(const std::exception& e) {
				err = e.what();
			}
			*d = static_cast<double>(*f);	
			break;
		case DOUBLE:
			*d = std::stod(input);
			if (std::isnan(*d) || std::isinf(*d))
				err = "nan/inf";
			*c = static_cast<char>(*d);
			*i = static_cast<int>(*d);
			*f = static_cast<float>(*d);
			break;
		default:
			std::cerr << "Not a scalar\n";
			exit(EXIT_FAILURE);
	}
	return err;
}