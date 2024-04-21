/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:44:40 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 23:55:08 by mbenchel         ###   ########.fr       */
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
	int		nl;
	int		i;

	n = -1;
	i = 0;
	line = malloc((size_t)BUFFER_SIZE + 1);
	if (!line)
		error();
	n = read(fd, line, BUFFER_SIZE);
	if (n == -1)
		error();
	while (n > 0)
		n = read(fd, line, BUFFER_SIZE);
	while (i < n && nl == -1)
	{
		if (line[i] == '\n')
			nl = i;
		i++;
	}
	// malloc instruction and copy and work with your linked lsit
}
