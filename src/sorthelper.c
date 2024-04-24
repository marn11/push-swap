/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorthelper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:53:15 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/24 20:47:31 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_it_sorted1(t_stack **a)
{
	t_stack	*tmp;

	if (!*a)
		return (0);
	tmp = *a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	exit(0);
	return (1);
}

int	bottom_index(t_stack **a)
{
	t_stack	*tmp;
	int		last;

	tmp = *a;
	last = 0;
	while (tmp)
	{
		last = tmp->index;
		tmp = tmp->next;
	}
	return (last);
}

int	count_rotations_to_bottom(t_stack **b, int index)
{
	t_stack	*tmp;
	int		rotations;

	tmp = *b;
	rotations = 0;
	if (!tmp)
		return (0);
	while (tmp && tmp->index != index)
	{
		tmp = tmp->next;
		rotations++;
	}
	return (rotations);
}

int	count_rotations_to_top(t_stack **b, int index)
{
	t_stack	*tmp;
	int		rotations;

	tmp = last_node(*b);
	rotations = 0;
	if (!tmp)
		return (0);
	while (tmp && tmp->index != index)
	{
		tmp = tmp->prev;
		rotations++;
	}
	return (rotations);
}

//void a tat7ydha
void	rb_vs_rrb(t_stack **b, int index, t_stack **a)
{
	int		fw_rotations;
	int		bw_rotations;

	(void)a;
	does_it_exist(b, index);
	fw_rotations = count_rotations_to_bottom(b, index);
	bw_rotations = count_rotations_to_top(b, index);
	if (fw_rotations <= bw_rotations)
		rb(b, 1);
	else
		rrb(b, 1);
}
