/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:44:40 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/23 20:29:32 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*last_node(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

int	check_inst(char *str)
{
	if (ft_strncmp(str, "sa", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "sb", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "ss", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "pa", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "pb", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "ra", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "rb", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "rr", 2) == 0)
		return (1);
	else if (ft_strncmp(str, "rra", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rrb", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rrr", 3) == 0)
		return (1);
	else
		error();
	return (0);
}

char	*ft_read_helper(int fd, char *line, char *ins, int *n)
{
	char	*tmp;

	while (*n > 0)
	{
		*n = read(fd, line, BUFFER_SIZE);
		if (*n == -1)
		{
			free(line);
			return (NULL);
		}
		else if (*n == 0)
			break ;
		line[*n] = '\0';
		tmp = ft_strjoin(ins, line);
		free(ins);
		ins = tmp;
	}
	return (ins);
}

char	**ft_read(int fd)
{
	char	*line;
	char	*ins;
	int		n;
	char	**res;

	n = 1;
	ins = NULL;
	line = malloc((size_t)BUFFER_SIZE + 1);
	if (!line)
		return (NULL);
	ins = ft_read_helper(fd, line, ins, &n);
	free(line);
	if (!ins)
		return (NULL);
	res = ft_split(ins, '\n');
	free(ins);
	if (!res)
		return (NULL);
	return (res);
}

void	exec_inst(char *s, t_stack **a, t_stack **b)
{
	if (ft_strncmp(s, "sa", 2) == 0)
		sa(a, 0);
	else if (ft_strncmp(s, "sb", 2) == 0)
		sb(b, 0);
	else if (ft_strncmp(s, "ss", 2) == 0)
		ss(a, b, 0);
	else if (ft_strncmp(s, "pa", 2) == 0)
		pa(a, b, 0);
	else if (ft_strncmp(s, "pb", 2) == 0)
		pb(a, b, 0);
	else if (ft_strncmp(s, "ra", 2) == 0)
		ra(a, 0);
	else if (ft_strncmp(s, "rb", 2) == 0)
		rb(b, 0);
	else if (ft_strncmp(s, "rr", 2) == 0)
		rr(a, b, 0);
	else if (ft_strncmp(s, "rra", 3) == 0)
		rra(a, 0);
	else if (ft_strncmp(s, "rrb", 3) == 0)
		rrb(b, 0);
	else if (ft_strncmp(s, "rrr", 3) == 0)
		rrr(a, b, 0);
	else
		error();
}
