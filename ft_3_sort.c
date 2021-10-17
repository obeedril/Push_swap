/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:59:36 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/03 19:10:24 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_3_sort(t_box *box)
{
	if (box->stack_a->id > box->tail_a->id)
	{
		ft_rotate_a(box);
		if (box->stack_a->id > box->tail_a->id)
			ft_rotate_a(box);
		if (box->stack_a->id > box->stack_a->next->id)
			ft_swap_a(box);
	}
	if (box->stack_a->id < box->tail_a->id)
	{
		if (box->stack_a->id < box->stack_a->next->id
			&& box->stack_a->next->id > box->tail_a->id)
		{
			ft_swap_a(box);
			ft_rotate_a(box);
		}
		if (box->stack_a->id > box->stack_a->next->id)
			ft_swap_a(box);
	}
}
