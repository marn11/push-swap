/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:31:28 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/24 00:53:16 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

#include "get_next_line2.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isdigit(int c);
int		ft_strlen(const char *s);
void	error(void);
char	*ft_strdup(const char *s);
char	**ft_split(const char *s, char c);
int		ft_2dlen(char **s);
long	ft_atol(const char *nptr);
void	ft_free(char **s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
