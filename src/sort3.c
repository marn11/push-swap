/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:18:26 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/03 18:34:04 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sort3(t_stack **a)
{
	int		x;
	int		y;

	x = (*a)->next->data;
	y = (*a)->next->next->data;
	if ((*a)->data > x && x > y)
		return (ra(a, 1), sa(a, 1), 1);
	else if ((*a)->data < x && (*a)->data < y && x < y)
		return (sa(a, 1), sa(a, 1), 1);
	else if ((*a)->data > x && (*a)->data < y)
		return (sa(a, 1), 1);
	else if ((*a)->data > x && x < y)
		return (ra(a, 1), 1);
	else if ((*a)->data < x && (*a)->data > y)
		return (rra(a, 1), 1);
	else if ((*a)->data < x && (*a)->data < y)
		return (rra(a, 1), sa(a, 1), 1);
	return (0);
}

void	ft_sort2(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (tmp->index == 1)
		sa(a, 1);
}

void	ft_sort5(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (ft_lstsize(*a) > 3)
	{
		if (i == (*a)->index)
		{
			pb(a, b, 1);
			i++;
		}
		else
			rra(a, 1);
	}
	ft_sort3(a);
	pa(a, b, 1);
	pa(a, b, 1);
}
