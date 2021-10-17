/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:43:31 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:33:55 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_box *box)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;

	if (box->stack_b != NULL)
	{
		list1 = box->stack_b;
		list2 = box->stack_b;
		list2 = list2->next;
		box->stack_b = box->stack_b->next;
		if (box->stack_a == NULL)
		{
			box->stack_a = list1;
			list1->next = NULL;
		}
		else
		{
			list3 = box->stack_a;
			box->stack_a = list1;
			list1->next = list3;
		}
		if (box->mode == 1)
			write (1, "pa\n", 3);
	}
}
