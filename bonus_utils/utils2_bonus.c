/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:48:02 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 18:59:23 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils_bonus.h"

static size_t	countwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*getwords(int *i, const char *s, char c)
{
	int		tpos;
	int		j;
	char	*word;

	j = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	tpos = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	word = malloc(sizeof(char) * (*i - tpos + 1));
	if (!word)
		return (NULL);
	while (tpos + j < *i)
	{
		word[j] = s[tpos + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_freew(char **s)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			free(s[i]);
			i++;
		}
		free(s);
	}
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		wc;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	wc = countwords(s, c);
	tab = malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	while (j < wc)
	{
		tab[j] = getwords(&i, s, c);
		if (!tab[j])
		{
			return (ft_freew(tab));
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
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

long	ft_atol(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] == 48)
		i++;
	result = parse_nb(nptr, &i);
	return (result * sign);
}
