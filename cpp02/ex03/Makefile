NAME	:= bsp
CXX		:= c++
CXXFLAGS:= -Wall -Wextra -Werror -fsanitize=address

SRCS	:= main.cpp \
			Fixed.cpp \
			Point.cpp \
			bsp.cpp
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
