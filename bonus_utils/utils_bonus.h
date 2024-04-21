/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:31:28 by mbenchel          #+#    #+#             */
/*   Updated: 2024/04/21 18:58:53 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int	ft_isdigit(int c);
int	ft_strlen(const char *s);
void	error(void);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(const char *s, char c);
int		ft_2dlen(char **s);
long	ft_atol(const char *nptr);
void	ft_free(char **s);

#endif
