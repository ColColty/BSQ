##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	$(realpath ./src)

LIB_FILE	=	$(realpath ./lib/my/)

SRC	=	$(SRC_DIR)/\

MAIN_SRC	=	main.c

NAME	=	a.out

LIB	=	-L$(LIB_FILE) -lmy

INCLUDE	=	-I./include

all:	$(NAME)

$(NAME):
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB) -g3

clean:
	make clean -C $(LIB_FILE)

fclean:	clean
	rm -f $(NAME)
	make fclean -C $(LIB_FILE)

re:	fclean all

precise:
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB) -Wall -Wextra