/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:24:04 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/21 15:55:50 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef char	t_bool;
# define SUCCESS 1
# define TRUE 1
# define FALSE 0
# define EVEN(x) (x % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
