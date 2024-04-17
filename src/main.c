/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:50:04 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/08 16:58:54 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && (av[1][0] == '\0'
			|| (av[1][0] >= 9 && av[1][0] <= 13))))
		return (write(2, "Error\n", 6), exit(1), 1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	init_stack(&a, av, ac);
	index_stack(&a);
	if (ft_lstsize(a) == 3)
		ft_sort3(&a);
	else if (ft_lstsize(a) == 2)
		ft_sort2(&a);
	else if (ft_lstsize(a) == 5)
		ft_sort5(&a, &b);
	else if (ft_lstsize(a) == 4)
		ft_sort5(&a, &b);
	else if (ft_lstsize(a) > 5)
		ft_sort_p1(&a, &b);
}
// double check all the files + fix leaks + norm 25 lines... + parsing