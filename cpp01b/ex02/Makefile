CC = c++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = brain

SRC = main.cpp\

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

