SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= megaphone

CC 			= clang++
CFLAGS 		= -std=c++98 -Wall -Wextra -Werror
RM 			= rm -rf

####################################
$(NAME)		: $(OBJS)
	$(CC) -o $@ $^

all 		: $(NAME)

%.o 		: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
####################################

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone

.PHONY:		all clean fclean re test