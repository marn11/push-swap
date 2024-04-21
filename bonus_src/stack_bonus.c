/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:31:45 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 18:31:54 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_repeated(t_stack *a, int nbr)
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
		while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
			i++;
		if (s[i] && (s[i] == '-' || s[i] == '+'))
			i++;
		if (!s[i])
			return (write(2, "Error\n", 6), exit(1), 1);
		if (s[i] && !ft_isdigit(s[i]))
			return (write(2, "Error\n", 6), exit(1), 1);
		while (s[i] && ft_isdigit(s[i]))
			i++;
		if (s[i] && (s[i] == '-' || s[i] == '+'))
			return (write(2, "Error\n", 6), exit(1), 1);
		while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
			i++;
	}
	return (0);
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

char	*setup(char **av, int ac)
{
	int		i;
	char	*join;
	char	*tmp;

	i = 1;
	join = NULL;
	if (ft_strlen(av[1]) == 0 && av[1][0] == '\0')
		error();
	while (i < ac)
	{
		check_error(av[i]);
		if (!join)
			join = ft_strdup("");
		else
		{
			tmp = ft_strjoin(join, " ");
			free(join);
			join = tmp;
		}
		tmp = ft_strjoin(join, av[i]);
		free(join);
		join = tmp;
		i++;
	}
	return (join);
}

void	init_stack(t_stack **a, char **av, int ac)
{
	int		i;
	char	*join;
	char	**res;
	long	*data;

	i = 1;
	join = setup(av, ac);
	res = ft_split(join, ' ');
	data = malloc(sizeof(long) * ft_2dlen(res));
	if (!data)
		exit(1);
	i = 0;
	while (res && res[i])
	{
		data[i] = ft_atol(res[i]);
		if (data[i] > INT_MAX || data[i] < INT_MIN)
			error();
		if (check_repeated(*a, (int)data[i]))
			error();
		add_node(a, (int)data[i]);
		i++;
	}
	free(join);
	free(data);
	ft_free(res);
}

