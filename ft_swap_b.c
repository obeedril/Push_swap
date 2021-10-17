/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:18:18 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/10 13:36:30 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_b(t_box *box)
{
	t_list	*list1;
	t_list	*list2;

	if (box->stack_b != NULL && box->stack_b->next != NULL)
	{
		list1 = box->stack_b;
		list2 = box->stack_b;
		list2 = list2->next;
		list1->next = list2->next;
		list2->next = list1;
		box->stack_b = list2;
		if (box->mode == 1)
			write (1, "sb\n", 3);
	}
}
