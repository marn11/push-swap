/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:50:04 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/19 17:33:50 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>
int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	// printf("---argv0 = %s\n", av[0]);
	// printf("----argv1 = %s\n", av[1]);
	// printf("----argv2 = %s\n", av[2]);
	// printf("----argv3 = %s\n", av[3]);
	init_stack(&a, av, ac);
	// printf("---argv0 = %s\n", av[0]);
	// printf("----argv1 = %s\n", av[1]);
	// printf("----argv2 = %s\n", av[2]);
	// printf("----argv3 = %s\n", av[3]);
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
	// t_stack *tmp = a;
	// while (tmp)
	// {
	// 	printf("in the stack %d\n", tmp->data);
	// 	tmp = tmp->next;
	// }
}
// double check all the files + fix leaks + norm 25 lines... + parsing


// handle case  "+1" "-3" and "+1 -3"
