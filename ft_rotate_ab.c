/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:47:37 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/07 20:39:11 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_ab(t_box *box)
{
	int	flag;

	flag = 0;
	if (box->stack_a != NULL && box->stack_a->next != NULL)
	{
		flag = 1;
		box->tail_a->next = box->stack_a;
		box->stack_a = box->stack_a->next;
		box->tail_a = box->tail_a->next;
		box->tail_a->next = NULL;
	}
	if (box->stack_b != NULL && box->stack_b->next != NULL)
	{
		flag = 2;
		box->tail_b->next = box->stack_b;
		box->stack_b = box->stack_b->next;
		box->tail_b = box->tail_b->next;
		box->tail_b->next = NULL;
	}
	if (box->mode == 1)
	{
		if (flag == 1 || flag == 2)
			write (1, "rr\n", 3);
	}
}
