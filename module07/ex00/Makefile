NAME		=	template
SRC			=	main.cpp\
				templateEx_class.cpp
CXX			=	g++-12
CXXFLAGS	=	-Werror -Wextra -Wall -std=c++98 -pedantic
OBJS		=	$(SRC:.cpp=.o) $(SRC:.tpp=.o)

%.o:	%.cpp %.tpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

run:		all
			./$(NAME)

leaks:
			leaks -atExit -- ./$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all run leaks clean fclean re