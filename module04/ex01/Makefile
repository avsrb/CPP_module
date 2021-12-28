.PHONY:
	all clean fclean re

NAME		= ex01

CC 			= clang++
CFLAGS 		= -Wall -Wextra -Werror -c -std=c++98
RM 			= rm -rf

HEADERS		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJS		= $(SRCS:.cpp=.o)

%.o		: %.cpp
	$(CC) $(CFLAGS) $< -o $@

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all 		: $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)
