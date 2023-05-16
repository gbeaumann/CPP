NAME		=	RPN	
SRC			=	main.cpp\
				RPN.cpp
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
OBJS		=	$(SRC:.cpp=.o)

%.o:		%.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

leaks:		all
			leaks -atExit -- ./$(NAME) "0 2 3 * +"

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all leaks clean fclean re