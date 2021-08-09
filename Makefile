NAME =		push_swap

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror -fsanitize=address -g

RM =		rm -rf

SRCS_C =	../push_swap.c utils.c parse.c

SRCS =		$(addprefix srcs/, $(SRCS_C))

OBJS =		$(SRCS:.c=.o)

INCLUDES =	header

LIBFT =		libft

all: $(NAME)

$(NAME):	$(OBJS)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(LIBFT)/libft.a $(OBJS) -o $(NAME)
%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<
clean:
	@$(RM) $(OBJS)
	@make fclean -C $(LIBFT)
fclean:
	@$(RM) $(OBJS) $(NAME)
	@make fclean -C $(LIBFT)
re:		fclean all

.PHONY:	all clean fclean re