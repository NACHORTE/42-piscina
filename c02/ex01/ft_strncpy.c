/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:19:45 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/09 15:10:13 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (src[aux] != '\0' && aux < n)
	{
		dest[aux] = src[aux];
		aux++;
	}
	while (aux < n)
	{
		dest[aux] = '\0';
		aux++;
	}
	return (dest);
}
