NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -rf

SRCS =	src/main.c \
		src/stack.c \
		src/swap_push.c \
		src/rotate.c \
		src/utils.c \
		src/sort3.c \
		src/sort.c \
		src/sorthelper.c \
		utils/utils.c \
		utils/utils2.c \
		utils/utils3.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	  $(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY:  clean fclean re all
