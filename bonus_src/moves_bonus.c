/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:43:38 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/22 15:00:59 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

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

void	sa(t_stack **a, int i)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (i == 1)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (i == 1)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b, int i)
{
	sa(a, 0);
	sb(b, 0);
	if (i == 1)
		ft_putstr_fd("ss\n", 1);
}

void	pa(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	if (i == 1)
		ft_putstr_fd("pa\n", 1);
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
