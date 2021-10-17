/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:00:33 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/16 13:12:38 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_commands(char *str, t_box *bbox)
{
	if (str[0] == 's' && str[1] == 'a' && str[2] == '\0')
		ft_swap_a(bbox);
	else if (str[0] == 's' && str[1] == 'b' && str[2] == '\0')
		ft_swap_b(bbox);
	else if (str[0] == 's' && str[1] == 's' && str[2] == '\0')
		ft_swap_ab(bbox);
	else if (str[0] == 'p' && str[1] == 'b' && str[2] == '\0')
		ft_push_b(bbox);
	else if (str[0] == 'p' && str[1] == 'a' && str[2] == '\0')
		ft_push_a(bbox);
	else if (str[0] == 'r' && str[1] == 'a' && str[2] == '\0')
		ft_rotate_a(bbox);
	else if (str[0] == 'r' && str[1] == 'b' && str[2] == '\0')
		ft_rotate_b(bbox);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == '\0')
		ft_rotate_ab(bbox);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'a' && str[3] == '\0')
		ft_revrot_a(bbox);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'b' && str[3] == '\0')
		ft_revrot_b(bbox);
	else if (str[0] == 'r' && str[1] == 'r' && str[2] == 'r' && str[3] == '\0')
		ft_revrot_ab(bbox);
	else
		ft_error();
}
