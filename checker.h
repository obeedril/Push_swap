/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:14:02 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/15 19:10:11 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

int		get_next_line(char **line);
void	ft_commands(char *line, t_box *bbox);
void	ft_check_sort(t_box *bbox);

#endif