/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:30:02 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 23:40:05 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_ins	*inst;

	inst = NULL;
	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	init_stack(&a, av, ac);
	is_it_sorted(&a);
	ft_read(0);
	add_inst(&inst, "sa");
	return (0);
}
// array or linked list store moves

//stack a 3amr kaml stack b khawi

// stack a msorti
