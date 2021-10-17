/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:53:40 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:42:59 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_sort(t_box *bbox)
{
	int		flag;
	t_list	*tmp;

	flag = 0;
	tmp = bbox->stack_a;
	while (tmp && tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
		{
			flag = 1;
			break ;
		}
		tmp = tmp->next;
	}
	if (flag == 0 && bbox->stack_b == NULL)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}
