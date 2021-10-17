/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:21:47 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/10 19:27:47 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	zero_items(int *i, int *res, int *minus)
{
	*i = 0;
	*res = 0;
	*minus = 1;
}

static int	ft_space(const char *s, int i)
{
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\v'
			|| s[i] == '\r' || s[i] == '\n' || s[i] == '\f'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			res;
	int			minus;

	zero_items(&i, &res, &minus);
	i = ft_space(str, i);
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while (str[i] != '\0' && str[i] != ' ')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (minus > 0 && INT_MAX - (res * 10) < (str[i] - 48))
				ft_error();
			else if (minus < 0 && INT_MAX + (res * 10) < (str[i] - 48) - 1)
				ft_error();
			res = res * 10 + minus * (str[i] - 48);
		}
		i++;
	}
	return (res);
}
