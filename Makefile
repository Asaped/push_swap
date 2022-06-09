NAME	=	push_swaped
SRCS 	=	$(wildcard *.c)
OBJS 	=	$(SRCS:.c=.o)
CC		=	gcc
CFLAGS	=	-Fsanitize=address -Wall -Wextra -Werror
RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
		
