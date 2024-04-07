/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:37:20 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/07 12:25:06 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>// remove when done with it
#include "utils/utils.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

t_stack	*last_node(t_stack *head);
void	init_stack(t_stack **a, char **av, int ac);
void	add_node(t_stack **stack, int data);
void	ss(t_stack **a, t_stack **b, int i);
void	pa(t_stack **a, t_stack **b, int i);
void	rr(t_stack **a, t_stack **b, int i);
void	pb(t_stack **a, t_stack **b, int i);
void	rrr(t_stack **a, t_stack **b, int i);
void	sa(t_stack **a, int i);
void	sb(t_stack **b, int i);
void	ra(t_stack **a, int i);
void	rb(t_stack **b, int i);
void	rra(t_stack **a, int i);
void	rrb(t_stack **b, int i);
int		check_error(char *s);
void	index_stack(t_stack **a);
int		ft_sort3(t_stack **a);
int		ft_lstsize(t_stack *lst);
void	ft_sort5(t_stack **a, t_stack **b);
void	ft_sort2(t_stack **a);
void	ft_sort_p1(t_stack **a, t_stack **b);
void	ft_sort_p2(t_stack **a, t_stack **b);
int		bottom_index(t_stack **a);

#endif
