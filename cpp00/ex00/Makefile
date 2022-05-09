NAME = megaphone
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY = clean fclean re