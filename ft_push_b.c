/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:44:01 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:25:45 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_box *box)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;

	if (box->stack_a != NULL)
	{
		list1 = box->stack_a;
		list2 = box->stack_a;
		list2 = list2->next;
		box->stack_a = box->stack_a->next;
		if (box->stack_b == NULL)
		{
			box->stack_b = list1;
			list1->next = NULL;
			box->tail_b = list1;
		}
		else
		{
			list3 = box->stack_b;
			box->stack_b = list1;
			list1->next = list3;
		}
		if (box->mode == 1)
			write (1, "pb\n", 3);
	}
}
