##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile libmy
##

CC	= gcc

SRC =	./src/main.c \
		./src/map.c \
		./src/matchstick.c \
		./src/player.c

OBJ	= $(SRC:.c=.o)

NAME	= matchstick

CFLAGS	= -W -Wall -Wextra -I./lib/my -L./lib/ -lmy

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)
	make clean -C ./lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my

re: fclean all

.PHONY: all clean fclean re
