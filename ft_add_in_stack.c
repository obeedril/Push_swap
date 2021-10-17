/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_in_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:10:23 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:25:32 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_in_stack(t_box *box, int d)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	tmp->value = d;
	tmp->next = (box->stack_a);
	if ((box->stack_a) == NULL)
		(box->tail_a) = tmp;
	box->stack_a = tmp;
	if (box->stack_a->next != NULL
		&& box->stack_a->value > box->stack_a->next->value)
		box->do_sort++;
}
