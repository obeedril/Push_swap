/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:44:12 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:47:26 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_box	box;
	int		i;
	int		count;
	int		*arr;

	(void)argc;
	box.mode = 1;
	box.stack_a = NULL;
	box.stack_b = NULL;
	box.do_sort = 0;
	count = ft_count_nums(argv + 1, 0, 0, 0);
	arr = malloc(sizeof(int) * (count + 1));
	arr = ft_get_num(argv + 1, arr);
	i = count;
	while (i)
	{
		ft_add_in_stack(&box, arr[i - 1]);
		i--;
	}
	*arr = *ft_arr_sort(arr, 0, (count - 1));
	ft_check_dup(arr, count);
	ft_add_id(&box, arr, count);
	ft_choose_sort(&box, count);
	exit (EXIT_SUCCESS);
}
