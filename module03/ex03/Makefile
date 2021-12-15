.PHONY:
	all clean fclean re

NAME		= ex03

CC 			= clang++
CFLAGS 		= -Wall -Wextra -Werror -c -std=c++98 -Wshadow -Wno-shadow
RM 			= rm -rf

HEADERS		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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
