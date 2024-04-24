/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:44:40 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/24 21:29:28 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*last_node(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

int	check_inst(char *str)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		return (1);
	else
		error();
	return (0);
}

void	exec_inst(char *s, t_stack **a, t_stack **b)
{
	if (ft_strncmp(s, "sa\n", 3) == 0)
		sa(a, 0);
	else if (ft_strncmp(s, "sb\n", 3) == 0)
		sb(b, 0);
	else if (ft_strncmp(s, "ss\n", 3) == 0)
		ss(a, b, 0);
	else if (ft_strncmp(s, "pa\n", 3) == 0)
		pa(a, b, 0);
	else if (ft_strncmp(s, "pb\n", 3) == 0)
		pb(a, b, 0);
	else if (ft_strncmp(s, "ra\n", 3) == 0)
		ra(a, 0);
	else if (ft_strncmp(s, "rb\n", 3) == 0)
		rb(b, 0);
	else if (ft_strncmp(s, "rr\n", 3) == 0)
		rr(a, b, 0);
	else if (ft_strncmp(s, "rra\n", 4) == 0)
		rra(a, 0);
	else if (ft_strncmp(s, "rrb\n", 4) == 0)
		rrb(b, 0);
	else if (ft_strncmp(s, "rrr\n", 4) == 0)
		rrr(a, b, 0);
	else
		error();
}
//gnl daorri
