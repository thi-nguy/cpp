# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 01:25:50 by mfunyu            #+#    #+#              #
#    Updated: 2021/10/28 13:32:57 by thi-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= test
CXX		:= c++
CXXFLAGS:= -Wall -Wextra -Werror

SRCS	:= Account.cpp \
			tests.cpp
OBJS	:= $(SRCS:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

##############################

TESTER	:= cpp00-ex02_diff.sh

${TESTER}	:
	curl -O https://raw.githubusercontent.com/mfunyu/tester_cpp-module/main/cpp00-ex02_diff.sh

runtest	: ${NAME} ${TESTER}
	@chmod 755 ${TESTER}
	./${TESTER}

