##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	$(realpath ./src)

LIB_FILE	=	$(realpath ./lib/my/)

TEST_SRC	=	$(realpath ./tests)

SRC	=	$(SRC_DIR)/bsq.c	\
	$(SRC_DIR)/find_the_square.c	\

TESTS	=	$(TEST_SRC)/test_out.c	\

MAIN_SRC	=	main.c

NAME	=	bsq

LIB	=	-L$(LIB_FILE) -lmy

INCLUDE	=	-I./include

all:	$(NAME)

$(NAME):
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB)

clean:
	make clean -C $(LIB_FILE)
	@rm -f peda*
	@rm -f *.gc*
	@rm -f *.o
	@rm -f unit_tests

fclean:	clean
	rm -f $(NAME)
	make fclean -C $(LIB_FILE)

re:	fclean all

precise:
	make -C $(LIB_FILE)
	gcc -o $(NAME) $(MAIN_SRC) $(SRC) $(INCLUDE) $(LIB) -Wall -Wextra

tests_run:	re
	gcc -c $(SRC) $(INCLUDE) --coverage
	gcc -c $(TESTS) $(INCLUDE)
	gcc -o unit_tests *.o $(LIB) -lcriterion -lgcov
	./unit_tests
	gcovr