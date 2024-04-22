/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:30:02 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/22 18:00:12 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"


int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**ins;
	int		i;

	a = NULL;
	b = NULL;
	i = 0;

	if (ac == 1)
		return (0);
	init_stack(&a, av, ac);
	is_it_sorted(&a);
	ins = ft_read(0);
	while (ins[i])
	{
		if (check_inst(ins[i]))
			exec_inst(ins[i], &a, &b);
		i++;
	}
	if (is_it_sorted1(&a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free_all(&a, ins);
	return (0);
}
// error management KO blast error
