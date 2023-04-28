NAME	=	identification
SRC		=	main.cpp
CXX		=	c++
CXXFLAG	=	-Werror -Wextra -Wall -std=c++98 -pedantic
OBJS	=	$(SRC:.cpp=.o)

%.o:	%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

run:	all
	./$(NAME)

leaks:
	leaks -atExit -- ./$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all run leaks clean fclean re
