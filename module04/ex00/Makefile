NAME		=	animal
SRC			=	main.cpp\
				Animal_class.cpp\
				Cat_class.cpp\
				Dog_class.cpp\
				WrongAnimal_class.cpp\
				WrongCat_class.cpp
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

leaks:		all
		leaks -atExit -- ./$(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all run leaks fclean clean re