/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choose_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:22:55 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 12:35:27 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_choose_sort(t_box *box, int count)
{
	if (box->do_sort > 0)
	{
		if (count == 3)
			ft_3_sort(box);
		else if (count == 5)
			ft_5_sort(box);
		else
			ft_major_sort(box, count);
	}
}
