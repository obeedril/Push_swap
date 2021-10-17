/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:23:13 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:39:21 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_b(t_box *box)
{
	if (box->stack_b != NULL && box->stack_b->next != NULL)
	{
		box->tail_b->next = box->stack_b;
		box->stack_b = box->stack_b->next;
		box->tail_b = box->tail_b->next;
		box->tail_b->next = NULL;
		if (box->mode == 1)
			write (1, "rb\n", 3);
	}
}
