/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrot_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:15:48 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:36:18 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_part_revrot(t_list **stack, t_list **tail)
{
	t_list	*prev;

	prev = *stack;
	(*tail)->next = *stack;
	*stack = *tail;
	while (prev->next != *tail)
		prev = prev->next;
	prev->next = NULL;
	*tail = prev;
}

void	ft_revrot_ab(t_box *box)
{
	int		flag;

	flag = 0;
	if (box->stack_a != NULL && box->stack_a->next != NULL)
	{
		flag = 1;
		ft_part_revrot(&box->stack_a, &box->tail_a);
	}
	if (box->stack_b != NULL && box->stack_b->next != NULL)
	{
		flag = 2;
		ft_part_revrot(&box->stack_b, &box->tail_b);
	}
	if (box->mode == 1)
	{
		if (flag == 1 || flag == 2)
			write (1, "rrr\n", 4);
	}
}
