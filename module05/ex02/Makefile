.PHONY:
	all clean fclean re

NAME		= ex01

CC 			= clang++
CFLAGS 		= -Wall -Wextra -Werror -c -std=c++98
RM 			= rm -rf

HEADERS		= Bureaucrat.hpp Form.hpp
SRCS		= main.cpp Bureaucrat.cpp Form.cpp

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
