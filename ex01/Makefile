NAME = Zombie

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDE = includes/
CFILES = main.cpp zombieHorde.cpp Zombie.cpp

OBJECTS = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)


clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 