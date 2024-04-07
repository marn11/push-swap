/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:53:15 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/07 22:29:47 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_p1(t_stack **a, t_stack **b)
{
	int	lastp1;
	int	p1;
	int	p2;

	lastp1 = -1;
	p1 = ft_lstsize(*a) / 3;
	p2 = ft_lstsize(*a) / 6;
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->index < p1)
			pb(a, b, 1);
		else
			ra(a, 1);
		if ((*b) && ft_lstsize(*b) > 1 && ((*b)->index >= lastp1 && (*b)->index <= p2))
			rb(b, 1);
		if (ft_lstsize(*b) == p1)
		{
			lastp1 = p1;
			p1 = ft_lstsize(*a) / 3 + p1;
			p2 = ft_lstsize(*a) / 6 + lastp1;
		}
	}
	ft_sort3(a);
	ft_sort_p2(a, b);
}

int	bottom_index(t_stack **a)
{
	t_stack *tmp;
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

void	ft_sort_p2(t_stack **a, t_stack **b)
{
	int	biggest_index;

	biggest_index = bottom_index(a);
	while (*b)
	{
		while ((*b) && (*b)->index != (*a)->index - 1)
		{
			if (bottom_index(a) == biggest_index || bottom_index(a) < (*b)->index)
			{
				pa(a, b, 1);
				ra(a, 1);
			}
			else
				rb(b, 1);
		}
		while ((*b) && (*b)->index == (*a)->index - 1)
			pa(a, b, 1);
		while (bottom_index(a) == (*a)->index - 1)
			rra(a, 1);
	}
}
