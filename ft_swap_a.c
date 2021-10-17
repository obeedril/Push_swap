/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:45:12 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/15 20:35:59 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_box *box)
{
	t_list	*list1;
	t_list	*list2;

	if (box->stack_a != NULL && box->stack_a->next != NULL)
	{
		list1 = box->stack_a;
		list2 = box->stack_a;
		list2 = list2->next;
		list1->next = list2->next;
		list2->next = list1;
		box->stack_a = list2;
		if (box->mode == 1)
			write (1, "sa\n", 3);
	}
}
