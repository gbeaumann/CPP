NAME		=	violence
SRC			=	main.cpp\
				Weapon_class.cpp\
				HumanA_class.cpp\
				HumanB_class.cpp
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

re:		fclean all

.PHONY: all fclean clean re