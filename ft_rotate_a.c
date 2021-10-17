/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:44:54 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:37:50 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_box *box)
{
	if (box->stack_a != NULL && box->stack_a->next != NULL)
	{
		box->tail_a->next = box->stack_a;
		box->stack_a = box->stack_a->next;
		box->tail_a = box->tail_a->next;
		box->tail_a->next = NULL;
		if (box->mode == 1)
			write (1, "ra\n", 3);
	}
}
