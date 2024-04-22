/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:30:18 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/22 17:58:41 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../bonus_utils/utils_bonus.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

# define BUFFER_SIZE 1

char	**ft_read(int fd);
void	init_stack(t_stack **a, char **av, int ac);
t_stack	*last_node(t_stack *head);
int		is_it_sorted(t_stack **a);
int		check_inst(char *str);
void	ra(t_stack **a, int i);
void	rb(t_stack **b, int i);
void	rr(t_stack **a, t_stack **b, int i);
void	rra(t_stack **a, int i);
void	rrb(t_stack **b, int i);
void	rrr(t_stack **a, t_stack **b, int i);
void	sa(t_stack **a, int i);
void	sb(t_stack **b, int i);
void	ss(t_stack **a, t_stack **b, int i);
void	pa(t_stack **a, t_stack **b, int i);
void	pb(t_stack **a, t_stack **b, int i);
void	exec_inst(char *str, t_stack **a, t_stack **b);
void	ft_putstr_fd(char *s, int fd);
int		is_it_sorted1(t_stack **a);
void	free_list(t_stack **stack);
void	ft_free_all(t_stack **a, char **ins);

#endif