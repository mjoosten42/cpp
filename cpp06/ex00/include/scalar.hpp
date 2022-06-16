#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>

typedef enum	scalars { NONE, INT, CHAR, FLOAT, DOUBLE } e_scalar;

e_scalar	getType(std::string& str);

#endif // SCALAR_HPP
