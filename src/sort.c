/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:53:15 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/04 15:15:20 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	divide_stack(t_stack **a, t_stack **b)
{
	int		i;
	int		size_a;
	int		chunk_size;

	size_a = ft_lstsize(*a);
	chunk_size = size_a / 3;
	i = 0;
	while (i < chunk_size && *a)
	{
		pb(a, b, 1);
		i++;
	}
}

void	ft_sort(t_stack **a, t_stack **b)
{
	divide_stack(a, b);
}
