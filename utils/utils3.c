/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 01:01:43 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 00:20:27 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strdup(const char *s)
{
	size_t	l;
	size_t	j;
	char	*dup;

	j = 0;
	l = ft_strlen(s);
	dup = malloc(sizeof(char) * (l + 1));
	if (dup == NULL)
		return (NULL);
	while (j < l)
	{
		dup[j] = s[j];
		j++;
	}
	dup[l] = '\0';
	return (dup);
}

int	ft_2dlen(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

long	parse_nb(const char *nptr, int *i)
{
	long	res;
	int		digc;

	res = 0;
	digc = 0;
	while (nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		digc++;
		if (digc > 10)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		res = res * 10 + nptr[*i] - '0';
		(*i)++;
	}
	return (res);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
