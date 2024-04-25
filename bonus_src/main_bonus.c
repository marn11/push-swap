/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:30:02 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/25 15:50:43 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	lastcheck(t_stack *a, t_stack *b)
{
	if (is_it_sorted1(&a) && !b)
		write(1, "OK\n", 3);
	else
	{
		write(1, "KO\n", 3);
		if (b)
			free_list(&b);
	}
	if (a)
		free_list(&a);
}

int	get_inst(t_stack **a, t_stack **b)
{
	char	*ins;
	int		n;

	n = 1;
	while (n)
	{
		ins = get_next_line(0);
		if (!ins)
			n = 0;
		else
		{
			if (!check_inst(ins))
			{
				free(ins);
				error();
				return (0);
			}
			exec_inst(ins, a, b);
			free(ins);
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	init_stack(&a, av, ac);
	get_inst(&a, &b);
	lastcheck(a, b);
}

//makefile check relink
// fix leak
