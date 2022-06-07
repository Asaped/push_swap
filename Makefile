NAME	=	push_swaped
SRCS 	=	push_swap.c
OBJ 	=	$(SRCS:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS)
		ar rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
		
