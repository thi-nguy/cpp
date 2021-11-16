NAME	:= animal
CXX		:= c++ #change to clang++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98 -pedantic -Wshadow -fsanitize=address

SRCS	:= main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp
						
OBJS	:= $(SRCS:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all
