##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/main.c	\
		src/error.c	\
		src/bombyx.c	\

TESTS	=	src/bombyx.c	\
		src/error.c	\
		tests/test_bombyx.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	106bombyx

CFLAGS	=	-W -Wall

CPPFLAGS	=	-I include/

UNITFLAGS	=	-lcriterion --coverage

EXECTESTS	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

tests_run:
	$(CC) -o $(EXECTESTS) $(TESTS) $(CFLAGS) $(CPPFLAGS) $(UNITFLAGS)
	./$(EXECTESTS) && gcovr --branches --exclude tests/

clean:
	rm -f $(OBJ)
	rm -f *.gc*

fclean:	clean
	rm -f $(NAME)
	rm -f $(EXECTESTS)

re:	fclean all

.PHONY:	all clean fclean re
