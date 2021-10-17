/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:24:57 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:35:58 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_list{
	int				value;
	int				id;
	struct s_list	*next;
}	t_list;

typedef struct s_box{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*tail_a;
	t_list	*tail_b;
	int		do_sort;
	int		mode;
}	t_box;

typedef struct s_sort{
	int	left;
	int	right;
	int	middle;
	int	tmp;
}	t_sort;

void	ft_swap_a(t_box *box);
void	ft_swap_b(t_box *box);
void	ft_swap_ab(t_box *box);
void	ft_rotate_a(t_box *box);
void	ft_rotate_b(t_box *box);
void	ft_rotate_ab(t_box *box);
void	ft_revrot_a(t_box *box);
void	ft_revrot_b(t_box *box);
void	ft_revrot_ab(t_box *box);
void	ft_push_a(t_box *box);
void	ft_push_b(t_box *box);
int		*ft_arr_sort(int *arr, int first, int last);
void	ft_add_id(t_box *box, int *arr, int count);
void	ft_error(void);
void	ft_check_dup(int *arr, int count);
void	ft_check_errors(int count);
void	ft_3_sort(t_box *box);
void	ft_5_sort(t_box *box);
void	ft_major_sort(t_box *box, int count);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_choose_sort(t_box *box, int count);
int		*ft_get_num(char **argv, int *arr);
int		ft_count_nums(char **argv, int i, int j, int counter);
void	ft_add_in_stack(t_box *box, int d);
int		ft_validation(char *str);
char	**ft_split(char const *s, char c);

#endif
