##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	\

MAIN_SRC	=	

NAME	=	a.out

LIB_FILE	=	./lib/my/

LIB	=	-L$(LIB_FILE) -lmy

INCLUDE	=	-I./include

all:	$(NAME)

$(NAME):
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB)

clean:
	make clean -C $(LIB_FILE)

fclean:	clean
	rm -f $(NAME)
	make fclean -C $(LIB_FILE)

re:	fclean all

precise:
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB) -Wall -Wextra