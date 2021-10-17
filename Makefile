NAME	=	push_swap
NAME_B	=	checker

SRC		=	ft_push_swap.c ft_add_id.c ft_arr_sort.c \
			ft_check_dup.c ft_error.c ft_split.c \
			ft_push_b.c ft_revrot_a.c ft_revrot_ab.c \
			ft_revrot_b.c ft_rotate_a.c ft_rotate_ab.c \
			ft_rotate_b.c ft_swap_a.c ft_swap_ab.c \
			ft_swap_b.c ft_3_sort.c ft_5_sort.c \
			ft_major_sort.c ft_atoi.c ft_strchr.c \
			ft_choose_sort.c ft_get_num.c ft_count_nums.c \
			ft_add_in_stack.c ft_push_a.c ft_validation.c \

SRC_B	=	ft_checker.c ft_error.c ft_check_dup.c \
			ft_push_b.c ft_revrot_a.c ft_revrot_ab.c \
			ft_revrot_b.c ft_rotate_a.c ft_rotate_ab.c \
			ft_rotate_b.c ft_swap_a.c ft_swap_ab.c \
			ft_swap_b.c ft_push_a.c get_nxt_line.c \
			ft_commands.c ft_check_sort.c ft_atoi.c \
			ft_strchr.c ft_get_num.c ft_count_nums.c \
			ft_add_in_stack.c ft_check_errors.c ft_arr_sort.c \
			ft_split.c ft_validation.c \

OBJ		=	${SRC:.c=.o}

OBJ_B	=	${SRC_B:.c=.o}

CC			= gcc

FLAGS		= -Wall -Wextra -Werror -g

RM			= rm -f

.c.o:	=	
			${CC} ${FLAGS} -c $< -o $@

${NAME}: 	Makefile push_swap.h ${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

${NAME_B}: 	Makefile checker.h ${OBJ_B}
			${CC} ${FLAGS} ${OBJ_B} -o ${NAME_B}

all: ${NAME}

bonus:		${NAME_B}

clean:
	${RM} ${OBJ} ${OBJ_B}

fclean: clean
	${RM} ${NAME} ${NAME_B}

re: fclean all

rebonus:	fclean bonus

.PHONY: all clean fclean re bonus rebonus