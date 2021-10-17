/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:20:36 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:47:53 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_zero_items(int *i, int *num)
{
	*i = -1;
	*num = 0;
}

int	*ft_get_num(char **a, int *arr)
{
	int		i;
	int		j;
	int		num;
	char	**tmp;

	ft_zero_items(&i, &num);
	while (a[++i])
	{
		if (ft_strchr(a[i], ' '))
		{	
			tmp = ft_split(a[i], ' ');
			if (tmp[0] == '\0')
				ft_error();
			j = 0;
			while (tmp[j])
			{
				arr[num++] = ft_validation(tmp[j]);
				free(tmp[j++]);
			}
			free(tmp);
		}
		else
			arr[num++] = ft_validation(a[i]);
	}
	return (arr);
}
