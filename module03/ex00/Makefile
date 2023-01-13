NAME	=	claptrap
SRC		=	main.cpp\
			ClapTrap_class.cpp
CC		=	c++
CFLAG	=	-Wall -Werror -Wextra -std=c++98
OBJS	=	$(SRC:.cpp=.o)

%.o:		%.cpp
	$(CC) $(CFLAG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean all

.PHONY:	all clean fclean re