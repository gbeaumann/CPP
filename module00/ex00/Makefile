NAME	=	megaphone
SRC		=	megaphone.cpp
CC		=	c++
CFLAG	=	-Wall -Wextra -Werror -std=c++98
OBJS	=	$(SRC:.cpp=.o)

%.o:		%.cpp
		$(CC) $(CFLAG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC)	$(CFLAG) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all fclean clean re