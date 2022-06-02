##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	my_getnbr.c \
		my_char_islower.c \
		my_char_isupper.c \
		my_print_digits.c \
		my_numlen.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strlen.c \
		my_atoi.c	\
		my_strdup.c \
		my_itoa.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) ../$(NAME)

re:	fclean all