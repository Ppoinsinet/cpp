SRC = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp

NAME = program

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): all

all:
	clang++ $(FLAGS) $(SRC) -o $(NAME)

re: fclean all

fclean:
	rm -rf $(NAME)