/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:37:43 by mbenchel          #+#    #+#             */
/*   Updated: 2024/03/31 15:17:50 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **a, int i)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	last = last_node(*a);
	*a = (*a)->next;
	(*a)->prev = NULL;
	tmp->next = NULL;
	tmp->prev = last;
	last->next = tmp;
	if (i)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **b, int i)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	last = last_node(*b);
	*b = (*b)->next;
	(*b)->prev = NULL;
	tmp->next = NULL;
	tmp->prev = last;
	last->next = tmp;
	if (i)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b, int i)
{
	ra(a, 0);
	rb(b, 0);
	if (i)
		ft_putstr_fd("rr\n", 1);
}

void	rra(t_stack **a, int i)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = last_node(*a);
	last = last_node(*a);
	if (last->prev)
		last->prev->next = NULL;
	last->prev = NULL;
	tmp->next = *a;
	(*a)->prev = tmp;
	*a = tmp;
	if (i)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **b, int i)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*b || !(*b)->next)
		return ;
	tmp = last_node(*b);
	last = last_node(*b);
	if (last->prev)
		last->prev->next = NULL;
	last->prev = NULL;
	tmp->next = *b;
	(*b)->prev = tmp;
	*b = tmp;
	if (i)
		ft_putstr_fd("rrb\n", 1);
}
