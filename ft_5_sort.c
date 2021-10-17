/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:39:16 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/03 19:10:34 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_5_sort(t_box *box)
{
	int	min_id;
	int	count;

	min_id = 2;
	count = 5;
	while (count > 0)
	{
		if (box->stack_a->id <= min_id)
			ft_push_b(box);
		else
			ft_rotate_a(box);
		count--;
	}
	ft_3_sort(box);
	if (box->stack_b->id < box->tail_b->id)
		ft_swap_b(box);
	count = 2;
	while (count > 0)
	{
		ft_push_a(box);
		count--;
	}
}
