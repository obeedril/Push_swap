/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_id.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:39:26 by obeedril          #+#    #+#             */
/*   Updated: 2021/09/29 21:45:28 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_id(t_box *box, int *arr, int count)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = box->stack_a;
	while (tmp != NULL)
	{
		while (i < count)
		{
			if (arr[i] == tmp->value)
			{
				tmp->id = i + 1;
				i = 0;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}
