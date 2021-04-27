##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile libmy
##

CC	= gcc

SRC	= $(wildcard *.c)

OBJ	= $(SRC:.c=.o)

NAME	= libmy.a

CFLAGS	= -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp -f $(NAME) ../

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)

re: fclean all

.PHONY: all clean fclean re lib
