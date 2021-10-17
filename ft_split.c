/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:55:48 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/09 21:24:20 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_word_len(int i, const char *s, char c)
{
	int	j;

	j = 0;
	while (s[i + j] && s[i + j] != c)
		j++;
	return (j);
}

static int	ft_kill_them_all(char **res, int counter)
{
	while (counter)
	{	
		counter--;
		free(res[counter]);
		res[counter] = NULL;
	}
	free(res);
	res = NULL;
	return (0);
}

static int	ft_array(char **res, const char *s, char c, int quantity)
{
	int	i;
	int	str_i;
	int	tmp;

	i = 0;
	str_i = 0;
	while (str_i < quantity)
	{
		while (s[i] == c)
			i++;
		tmp = ft_word_len(i, s, c);
		res[str_i] = (char *)malloc(sizeof(char) * (tmp + 1));
		if (!res[str_i])
			return (ft_kill_them_all((char **)res, str_i));
		tmp = 0;
		while (s[i] && s[i] != c)
		{
			res[str_i][tmp] = s[i];
			tmp++;
			i++;
		}
		res[str_i][tmp] = '\0';
		str_i++;
	}
	return (1);
}

static int	ft_words_count(const char *str, char c)
{
	int	i;
	int	counter;
	int	flag;

	i = 0;
	counter = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == c)
			flag = 0;
		if (flag == 0 && str[i] != c)
		{
			flag = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words_quantity;

	if (!s)
		return (NULL);
	words_quantity = ft_words_count(s, c);
	res = (char **)malloc(sizeof(char *) * (words_quantity + 1));
	if (!res)
		return (NULL);
	res[words_quantity] = ((void *)0);
	if (ft_array(res, s, c, words_quantity))
		return (res);
	else
		return (NULL);
}
