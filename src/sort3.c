/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:18:26 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/03 02:04:54 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void	ft_sort3(t_stack **a)
{
	t_stack *tmp;

	tmp = *a;
	if (tmp->index == 0)
	{
		if (tmp->next->index == 1)
			sa(a, 1);
		else
			ra(a, 1);
	}
	else if (tmp->next->index == 0)
	{
		if (tmp->index == 1)
			rra(a, 1);
		else
			sa(a, 1);
	}
	else
	{
		if (tmp->index == 1)
			ra(a, 1);
		else
			rra(a, 1);
	}
}
