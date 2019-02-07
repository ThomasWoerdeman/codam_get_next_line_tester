# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: twoerdem <twoerdem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/07 10:59:10 by twoerdem       #+#    #+#                 #
#    Updated: 2019/02/07 11:01:51 by twoerdem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = test_gnl

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
	clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
	clang -o $(NAME) main.o get_next_line.o -I libft/includes -L libft/ -lft

clean:
	rm -f main.o get_next_line.o

fclean: clean
	rm -f $(NAME)

re: fclean all
