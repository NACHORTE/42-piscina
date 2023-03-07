/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:55:54 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/10 13:26:21 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{	
	unsigned char	contenido;
	int				aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		contenido = str[aux];
		if (str[aux] >= ' ' && str[aux] < 127)
			ft_putchar(str[aux]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[contenido / 16]);
			ft_putchar("0123456789abcdef"[contenido % 16]);
		}
		aux++;
	}
}
