/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:28:48 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/01 01:51:47 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_repeated(t_stack *a , int nbr)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->data == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	check_error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i] == '-' || s[i] == '+')
			i++;
		while (ft_isdigit(s[i]))
			i++;
		if (s[i] && s[i] != ' ')
			return (write(2, "Error\n", 6), 1);
	}
	return(0);
}

t_stack	*last_node(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

void	add_node(t_stack **stack, int data)
{
	t_stack	*new;
	t_stack	*last;

	if (!stack)
		return ;
	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->data = data;
	new->next = NULL;
	if (!*stack)
	{
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		last = last_node(*stack);
		last->next = new;
		new->prev = last;
	}
}

void	init_stack(t_stack **a, char **av)
{
	long	nbr;
	int		i;
	char	*join;
	char	**res;

	i = 1;
	join = NULL;
	if (!av[0])
	{
		write(2, "error\n", 6);
		exit(1);
	}
	while (av[i])
	{
		check_error(av[i]);
		join = ft_strjoin(av[i], " ");
		join = ft_strjoin(join, av[i++]);
	}
	res = ft_split(join, ' ');
	i = 0;
	nbr = ft_atol(res[i]);
	if (nbr > INT_MAX || nbr < INT_MIN)
		exit(1);
	if (check_repeated(*a, (int)nbr))
	{
		write(2, "error\n", 6);
		exit(1);
	}
	add_node(a, (int)nbr);
	printf("%d\n", (*a)->data); // tooozzzzzz
	i++;
}


