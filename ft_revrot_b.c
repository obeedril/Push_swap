/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrot_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:28:35 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:37:37 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_revrot_b(t_box *box)
{
	t_list	*prev;

	if (box->stack_b != NULL && box->stack_b->next != NULL)
	{
		prev = box->stack_b;
		box->tail_b->next = box->stack_b;
		box->stack_b = box->tail_b;
		while (prev->next != box->tail_b)
			prev = prev->next;
		prev->next = NULL;
		box->tail_b = prev;
		if (box->mode == 1)
			write (1, "rrb\n", 4);
	}
}
