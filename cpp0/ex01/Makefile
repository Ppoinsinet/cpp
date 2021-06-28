SRC = contact.cpp main.cpp

NAME = PhoneBook

all: $(NAME)

$(NAME) :
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME) -g

fclean:
	rm -rf $(NAME)

re : fclean $(NAME)