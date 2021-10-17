/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:32:08 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:39:57 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_part_swap(t_list **stack)
{
	t_list	*list1;
	t_list	*list2;

	list1 = *stack;
	list2 = *stack;
	list2 = list2->next;
	list1->next = list2->next;
	list2->next = list1;
	*stack = list2;
}

void	ft_swap_ab(t_box *box)
{
	int		flag;

	flag = 0;
	if (box->stack_a != NULL && box->stack_a->next != NULL)
	{
		flag = 1;
		ft_part_swap(&box->stack_a);
	}
	if (box->stack_b != NULL && box->stack_b->next != NULL)
	{
		flag = 2;
		ft_part_swap(&box->stack_b);
	}
	if (box->mode == 1)
	{
		if (flag == 1 || flag == 2)
			write (1, "ss\n", 3);
	}
}
