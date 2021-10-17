/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_major_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 20:09:06 by obeedril          #+#    #+#             */
/*   Updated: 2021/10/03 12:54:32 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_choose_start(int count)
{
	int	start;

	start = 0;
	if (count <= 10)
		start = 2;
	else if (count <= 50)
		start = 5;
	else if (count > 50 && count <= 110)
		start = 15;
	else if (count > 110)
		start = 30;
	return (start);
}

static int	ft_short_way(t_box *box)
{
	int		way;
	int		mid_way;
	t_list	*tmp;
	int		next_id;
	int		flag;

	next_id = box->stack_a->id - 1;
	mid_way = next_id / 2;
	tmp = box->stack_b;
	way = 0;
	flag = 0;
	while (tmp->id != next_id)
	{
		tmp = tmp->next;
		way++;
	}
	if (way <= mid_way)
		flag = 1;
	else
		flag = 2;
	return (flag);
}

static void	ft_part_two(t_box *box)
{
	int	flag;

	while (box->stack_b != NULL)
	{
		flag = ft_short_way(box);
		if (flag == 1)
		{
			while (box->stack_b->id != box->stack_a->id - 1)
				ft_rotate_b(box);
		}
		else if (flag == 2)
		{
			while (box->stack_b->id != box->stack_a->id - 1)
				ft_revrot_b(box);
		}
		if (box->stack_b->id == box->stack_a->id - 1)
			ft_push_a(box);
	}
}

void	ft_major_sort(t_box *box, int count)
{
	int	start;
	int	d;
	int	sum;
	int	tmp_count;

	d = 0;
	tmp_count = count;
	start = ft_choose_start(count);
	while (tmp_count > 3)
	{
		sum = start + d;
		if (box->stack_a->id <= sum && box->stack_a->id < count - 2)
		{
			ft_push_b(box);
			d++;
			tmp_count--;
			if (box->stack_b->id < d)
				ft_rotate_b(box);
		}
		else
			ft_rotate_a(box);
	}
	ft_3_sort(box);
	ft_part_two(box);
}
