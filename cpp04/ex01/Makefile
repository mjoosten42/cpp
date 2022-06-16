NAME = zoo
CPP = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
INC = -I include

SRC = 	main.cpp 		\
		Animal.cpp 		\
		Dog.cpp			\
		Cat.cpp			\
		Brain.cpp		\

OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
OBJDIR = obj

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $^ -o $@

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	$(CPP) $(CPPFLAGS) -c $^ $(INC) -o $@

$(OBJDIR):
	mkdir $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY = clean fclean re