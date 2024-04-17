/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:07:03 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/06 07:03:15 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack **a, t_stack **b, int i)
{
	rra(a, 0);
	rrb(b, 0);
	if (i)
		ft_putstr_fd("rrr\n", 1);
}

void	index_stack(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *a;
	while (tmp)
	{
		tmp->index = 0;
		tmp2 = *a;
		while (tmp2)
		{
			if (tmp->data > tmp2->data)
				tmp->index++;
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

int	ft_lstsize(t_stack *lst)
{
	int		count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
