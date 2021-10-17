/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:44:20 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/15 16:31:58 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_zero_items(int *i, int *j, int *is_already_exist_num)
{
	*i = 0;
	*j = 0;
	*is_already_exist_num = 0;
}

static void	check_errors(char *str, int i)
{
	int	j;

	j = i;
	while (str[j])
	{
		if (j > 0 && (((str[j] < '0' || str[j] > '9') && str[j] != ' ' )
				&& str[j - 1] != ' '))
			ft_error();
		if (str[j] == '-' && str[j + 1] == '\0')
			ft_error();
		if (str[j] == '-' && (str[j + 1] < '0' || str[j + 1] > '9'))
			ft_error();
		j++;
	}
}

int	ft_validation(char *str)
{
	int	i;
	int	j;
	int	is_already_exist_num;

	ft_zero_items(&i, &j, &is_already_exist_num);
	if (!str[i])
		ft_error();
	while (str[j] != '\0')
	{
		if ((str[j] >= '0' && str[j] <= '9'))
			is_already_exist_num++;
		j++;
	}
	check_errors((char *)str, i);
	if (!is_already_exist_num)
		ft_error();
	while (str[i])
	{
		if (((str[i] < 48 || str[i] > 57) && (str[i] != 45 && str[i] != 43)))
			ft_error();
		i++;
	}
	return (ft_atoi(str));
}
