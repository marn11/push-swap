/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:18:36 by mbenchel          #+#    #+#             */
/*   Updated: 2024/03/30 20:33:46 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static size_t counwords(const char *s, char c)
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

static char *getwords(int *i, const char *s, char c)
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

static char **ft_free(char **s)
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

char **ft_split(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		wc;

	if (!s)
		return (NULL);

	i = 0;
	j = 0;
	wc = counwords(s, c);
	tab = malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	while (j < wc)
	{
		tab[j] = getwords(&i, s, c);
		if (!tab[j])
		{
			return (ft_free(tab));
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
