/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:53:15 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/06 15:16:36 by mbenchel         ###   ########.fr       */
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
		{
			pb(a, b, 1);
			index_stack(b);
			index_stack(a);
		}
		else
			ra(a, 1);
		if (ft_lstsize(*b) > 1 && ((*b)->index >= lastp1 && (*b)->index >= p2))
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
void	get_last_element_index(t_stack **a)
{
	t_stack *tmp;
	int		last;

	tmp = *a;
	last = 0;
	while (tmp)
	{
		if (tmp->index > last)
			last = tmp->index;
		tmp = tmp->next;
	}
	return (last);
}
void	get_biggest_index(t_stack **a)
{
	t_stack *tmp;
	int		biggest;

	tmp = *a;
	biggest = 0;
	while (tmp)
	{
		if (tmp->index > biggest)
			biggest = tmp->index;
		tmp = tmp->next;
	}
	return (biggest);
}

void	ft_sort_p2(t_stack **a, t_stack **b)
{
	int	biggest_index;
	int	bottoma_value;

	bottoma_value = get_;
}
