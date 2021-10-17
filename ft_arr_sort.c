/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:02:42 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/11 20:17:25 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort(t_sort	*item, int *arr, int first, int last)
{
	ft_arr_sort(arr, first, item->right);
	ft_arr_sort(arr, item->left, last);
}

int	*ft_arr_sort(int *arr, int first, int last)
{
	t_sort	item;

	if (first < last)
	{
		item.left = first;
		item.right = last;
		item.middle = arr[(item.left + item.right) / 2];
		while (item.left < item.right)
		{
			while (arr[item.left] < item.middle)
				item.left++;
			while (arr[item.right] > item.middle)
				item.right--;
			if (item.left <= item.right)
			{
				item.tmp = arr[item.left];
				arr[item.left] = arr[item.right];
				arr[item.right] = item.tmp;
				item.left++;
				item.right--;
			}
		}
		ft_sort(&item, arr, first, last);
	}
	return (arr);
}
