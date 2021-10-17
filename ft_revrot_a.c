/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrot_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:44:41 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:34:37 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_revrot_a(t_box *box)
{
	t_list	*prev;

	if (box->stack_a != NULL && box->stack_a->next != NULL)
	{
		prev = box->stack_a;
		box->tail_a->next = box->stack_a;
		box->stack_a = box->tail_a;
		while (prev->next != box->tail_a)
			prev = prev->next;
		prev->next = NULL;
		box->tail_a = prev;
		if (box->mode == 1)
			write (1, "rra\n", 4);
	}
}
