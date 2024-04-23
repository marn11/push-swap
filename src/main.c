/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:50:04 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/23 21:02:15 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
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
	free_list(&a);
	return (0);
}
// double check all the files and function comments...

// b9a gha dok lcomments w checker hhhhh
