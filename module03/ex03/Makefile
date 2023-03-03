NAME		=	diamondTrap
SRC			=	main.cpp\
				ClapTrap_class.cpp\
				SkavTrap_class.cpp\
				FragTrap_class.cpp\
				DiamondTrap_class.cpp
CXX			=	c++
CXXFLAGS	=	-Werror -Wextra -Wall -std=c++98 -pedantic
OBJS		=	$(SRC:.cpp=.o)

%.o:		%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CXX)	$(CXXFLAGS) $(OBJS) -o $(NAME)

run:		all
		./$(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all run fclean clean re