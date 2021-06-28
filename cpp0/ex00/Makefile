SRC = megaphone.cpp

NAME = megaphone

all: $(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

re: fclean all

fclean:
	rm -rf $(NAME)