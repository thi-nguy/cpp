INCLUDE_DIR = include/phonebook.hpp

INCLUDE = -I$(INCLUDE_DIR)

CC = clang++

FLAGS = -g -fsanitize=address -Wall -Wextra -Werror -Wno-unused -std=c++98 $(INCLUDE)

RM = rm -f

NAME = phonebook

SRC =

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	-@echo "Compiling..."
	$(CC) -o $(NAME) $(OBJ) $(FLAGS)

clean:
	-@echo "Removing object files..."
	$(RM) $(OBJ)

fclean: clean
	-@echo "Removing executive file..."
	$(RM) $(NAME)

re: fclean all

