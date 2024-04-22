/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:35:49 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/22 18:43:10 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_free_all(t_stack **a, char **ins)
{
	free_list(a);
	ft_free(ins);
}

int	is_it_sorted(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	error();
	return (1);
}

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
	return (1);
}

void	pb(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	if (i == 1)
		ft_putstr_fd("pb\n", 1);
}

void	rrr(t_stack **a, t_stack **b, int i)
{
	rra(a, 0);
	rrb(b, 0);
	if (i)
		ft_putstr_fd("rrr\n", 1);
}