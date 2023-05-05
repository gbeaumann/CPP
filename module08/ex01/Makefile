NAME		=	span
SRC			=	main.cpp\
				Span_class.cpp
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
OBJS		=	$(SRC:.cpp=.o)

%.o:	%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

run:		all
			./$(NAME)

leaks:		all
			leaks -atExit -- ./$(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all run leaks clean fclean re