/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:50:17 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/11 16:03:57 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*aux;
	unsigned int		n;

	n = 0;
	aux = dest;
	while (*aux != '\0')
		aux++;
	while (*src != '\0' && n < nb)
	{
		*aux = *src;
		aux++;
		src++;
		n++;
	}
	*aux = '\0';
	return (dest);
}
