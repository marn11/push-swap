/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:44:40 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 18:44:48 by mbenchel         ###   ########.fr       */
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

void ft_read(int fd)
{
	char	*line;
	int		n;

	line = malloc((size_t)BUFFER_SIZE + 1);
	if (!line)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	n = read(fd, line, BUFFER_SIZE);
	if (n == -1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	while (n > 0)
	{
		write(1, line, n);
		n = read(fd, line, BUFFER_SIZE);
	}
}
