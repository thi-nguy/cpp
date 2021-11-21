NAME	:= bureaucrat
CXX		:= clang++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS	:= main.cpp \
			Bureaucrat.cpp
						
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