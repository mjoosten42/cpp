NAME = replace
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

TESTFILE=Makefile
S1=NAME
S2=---NAME---

test: all
	./$(NAME) $(TESTFILE) $(S1) $(S2)
	sed 's/$(S1)/$(S2)/g' $(TESTFILE) > sed_output
	diff $(TESTFILE).replace sed_output

.PHONY = clean fclean re test