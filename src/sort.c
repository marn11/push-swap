/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:53:15 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/06 14:34:03 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_stack **a, t_stack **b)
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
}
