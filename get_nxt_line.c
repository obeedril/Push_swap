/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nxt_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:35:03 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 14:46:52 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	get_next_line(char **line)
{
	int		was_rd;
	int		i;
	char	sym;

	was_rd = 1;
	i = 0;
	sym = 0;
	*line = (char *)malloc(sizeof(char) * 4);
	while (was_rd > 0 && sym != '\n')
	{
		was_rd = read(0, &sym, 1);
		if (sym != '\n')
			line[0][i++] = sym;
	}
	line[0][i] = '\0';
	return (was_rd);
}
