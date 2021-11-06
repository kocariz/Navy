##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c \
		my_putstr.c	\
		my_strlen.c \
		my_put_nbr.c \
		my_getnbr.c \
		get_next_line.c \
		print_arr.c \
		concat_strings.c \
		my_strcmp.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -f $(NAME)

re : fclean all