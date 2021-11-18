NAME	:= bureaucrat
CXX		:= c++ #change to clang++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS	:= main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp
						
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