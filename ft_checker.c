/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:03:30 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:24:40 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	gnl_work(t_box *bbox)
{
	char	*line;

	line = NULL;
	(void)bbox;
	while (get_next_line(&line))
	{
		ft_commands(line, bbox);
		free(line);
		line = NULL;
	}
	free(line);
	line = NULL;
}

int	main(int argc, char *argv[])
{
	t_box	bbox;
	int		i;
	int		count;
	int		*arr;

	(void)argc;
	bbox.mode = 0;
	bbox.stack_a = NULL;
	bbox.stack_b = NULL;
	count = ft_count_nums(argv + 1, 0, 0, 0);
	arr = malloc(sizeof(int) * (count + 1));
	arr = ft_get_num(argv + 1, arr);
	ft_check_errors(count);
	i = count;
	while (i)
	{
		ft_add_in_stack(&bbox, arr[i - 1]);
		i--;
	}
	*arr = *ft_arr_sort(arr, 0, (count - 1));
	ft_check_dup(arr, count);
	gnl_work(&bbox);
	ft_check_sort(&bbox);
	exit (EXIT_SUCCESS);
}
