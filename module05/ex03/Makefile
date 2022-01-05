.PHONY:
	all clean fclean re

NAME		= ex03

CC 			= clang++
CFLAGS 		= -Wall -Wextra -Werror -c -std=c++98
RM 			= rm -rf

HEADERS		=	./Bureaucrat.hpp\
				./Form.hpp\
				./PresidentialPardonForm.hpp\
				./RobotomyRequestForm.hpp\
				./ShrubberyCreationForm.hpp\
				./Intern.hpp

SRCS		=	./Bureaucrat.cpp\
				./Form.cpp\
				./main.cpp\
				./PresidentialPardonForm.cpp\
				./RobotomyRequestForm.cpp\
				./ShrubberyCreationForm.cpp\
				./Intern.cpp

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
