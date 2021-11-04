NAME	:= attack
CXX		:= c++
CXXFLAGS:= -Wall -Wextra -Werror

SRCS	:= main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp
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
