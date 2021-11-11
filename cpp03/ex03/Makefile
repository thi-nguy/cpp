NAME	:= diamond_trap
CXX		:= c++ #change to clang++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow 

SRCS	:= main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp
			
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
