##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Do a file who compile for us
##

SRC	=	my_isneg.c	\
	my_put_nbr.c	\
	my_putchar.c	\
	my_putstr.c	\
	my_revstr.c	\
	my_strlen.c	\
	my_show_word_array.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
