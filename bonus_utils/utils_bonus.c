/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:34:09 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/24 21:13:40 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils_bonus.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*c;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	c = (char *)malloc(len + 1);
	if (c == NULL)
		return (NULL);
	while (s1[j])
		c[i++] = s1[j++];
	j = 0;
	while (s2[j])
		c[i++] = s2[j++];
	c[i] = '\0';
	return (c);
}
