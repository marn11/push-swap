/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:50:04 by mbenchel          #+#    #+#             */
/*   Updated: 2024/03/31 00:16:15 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;

	if (ac == 1 || (ac == 2 && (av[1][0] == '\0'
		|| (av[1][0] >= 9 && av[1][0] <= 13))))
			return (write(2, "error\n", 6), exit(1), 1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	init_stack(&a, av);
}
