/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:24:10 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/11 18:55:09 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_nums(char **argv, int i, int j, int counter)
{
	while (argv[i])
	{
		if (ft_strchr(argv[i], ' '))
		{
			while (argv[i][j])
			{
				while (argv[i][j] == ' ')
					j++;
				while (argv[i][j] != ' ' && argv[i][j] != '\0')
				{
					if (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0')
						counter++;
					j++;
				}
			}
		}
		else
			counter++;
		j = 0;
		i++;
	}
	return (counter);
}
