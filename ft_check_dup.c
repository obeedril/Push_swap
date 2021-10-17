/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:55:40 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/09 19:05:20 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_dup(int *arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if ((i + 1) < count && arr[i] == arr[i + 1])
			ft_error();
		i++;
	}
}
