/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenchel <mbenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:18:05 by mbenchel          #+#    #+#             */
/*   Updated: 2024/03/31 02:28:24 by mbenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

char	**ft_split(const char *s, char c);
long	ft_atol(const char *nptr);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(char *s);

#endif
