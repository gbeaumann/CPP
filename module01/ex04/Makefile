NAME		=	sed
SRC			=	main.cpp
CXX			=	g++-12
CXXFLAGS	=	-Werror -Wextra -Wall -std=c++98 -pedantic
OBJS		=	$(SRC:.cpp=.o)

%.o:		%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX)	$(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
		rm -f new_text.replace

re:		fclean all

.PHONY: all fclean clean re