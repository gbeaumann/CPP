NAME	=	convert
SRC		=	main.cpp\
			ScalarConverter_class.cpp

CXX		=	c++
CXXFLAG	=	-Werror -Wextra -Wall -std=c++98 -pedantic
OBJS	=	$(SRC:.cpp=.o)

%.o:	%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

run:	all
	./$(NAME) 10

leaks:
	leaks -atExit -- ./$(NAME) 10

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	all run clean fclean re
