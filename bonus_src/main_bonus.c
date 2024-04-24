/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:30:02 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/24 23:05:23 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>

void	f(void)
{
	system("leaks checker > leaks");
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*ins;
	int		i;
	int		n;

	a = NULL;
	b = NULL;
	i = 0;
	n = 1;
	if (ac == 1)
		return (0);
	// atexit(f);
	init_stack(&a, av, ac);
	while (n)
	{
		ins = get_next_line(0);
		printf("ins = %s\n", ins);
		if (!ins)
			n = 0;
		else
		{
			if (!check_inst(ins))
			{
				free(ins);
				error();
			}
			exec_inst(ins, &a, &b);
			free(ins);
		}
	}
	if (is_it_sorted1(&a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free_all(&a, ins);
	return (0);
}
// error management KO blast error
// leaks ft_read check
//makefile check relink
// ila  drt ctrl d lmra lwla ga3 katl3 ok 3ndhom b nbr wahd
