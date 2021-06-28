SRC = main.cpp

NAME = sed

all: $(NAME)

$(NAME):
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)