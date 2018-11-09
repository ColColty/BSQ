##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	$(realpath ./src)

LIB_FILE	=	$(realpath ./lib/my/)

TEST_SRC	=	$(realpath ./test)

SRC	=	$(SRC_DIR)/bsq.c	\
	$(SRC_DIR)/find_the_square.c	\

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

fclean:
	rm -f $(NAME)
	make fclean -C $(LIB_FILE)

re:	fclean all

precise:
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB) -Wall -Wextra

test:
	make -C $(LIB_FILE)
	gcc -o unit_tests $(MAIN_SRC) $(SRC) $(TEST_SRC) --coverage -lcriterion