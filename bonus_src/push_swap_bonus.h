/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:30:18 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 23:39:38 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../bonus_utils/utils_bonus.h"

typedef struct s_ins
{
	char *ins;
	struct s_ins *next;
} t_ins;

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_ins
{
	char *ins;
	struct s_ins *next;
} t_ins;

# define BUFFER_SIZE 1

void	ft_read(int fd);
void	init_stack(t_stack **a, char **av, int ac);
t_stack	*last_node(t_stack *head);
int		is_it_sorted(t_stack **a);
void	add_inst(t_ins **ins, char *s);

#endif
