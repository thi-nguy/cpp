CC = c++

FLAGS = -Wall -Wextra -Werror -fsanitize=address

RM = rm -f

NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp main.cpp\

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

