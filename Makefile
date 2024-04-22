NAME = push_swap

NAME_BONUS = checker

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

SRCS_BONUS =	bonus_src/main_bonus.c \
				bonus_src/read.c \
				bonus_src/stack_bonus.c \
				bonus_src/moves_bonus.c \
				bonus_src/moves2_bonus.c \
				bonus_src/helper_bonus.c \
				bonus_utils/utils_bonus.c \
				bonus_utils/utils2_bonus.c \
				bonus_utils/utils3_bonus.c \


OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

bonus: $(NAME_BONUS)

%_bonus.o : bonus_src/%.c bonus_utils/%.c bonus_src/push_swap_bonus.h bonus_utils/utils_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(NAME_BONUS):	$(OBJS_BONUS)
				$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJS_BONUS)

$(OBJS_BONUS): bonus_src/push_swap_bonus.h bonus_utils/utils_bonus.h

clean:
	  $(RM) $(OBJS) $(OBJS_BONUS)

fclean: 	clean
			$(RM) $(NAME) $(NAME_BONUS)

re: 		fclean all

.PHONY:  clean fclean re all
