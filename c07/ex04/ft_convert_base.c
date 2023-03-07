/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:06:13 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/22 13:44:07 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_base_ok(char *str);
int	ft_atoi_base(char *str, char *base);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
		dest[i++] = *src++;
	return (dest);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len;
	char	v[33];
	int		i;
	int		j;

	i = 0;
	j = 1;
	if (!ft_base_ok(base))
		return (0);
	len = ft_strlen(base);
	if (nbr < 0)
		v[i++] = '-';
	while (j <= nbr / len)
		j *= len;
	while (j > 0)
	{
		v[i++] = base[(nbr / j) * ((nbr >= 0) - (nbr < 0))];
		nbr %= j;
		j /= len;
	}
	v[i] = '\0';
	return (ft_strcpy(malloc(i + 1), v));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;

	i = 0;
	while (nbr[i] != '\0')
	{
		if (nbr[i] != '0' && ft_atoi_base(nbr, base_from) == 0)
			return (0);
		i++;
	}
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(int c, char **v)
{
	if(c == 4)
		printf("%s",ft_convert_base(v[1],v[2],v[3]));
	return (0);
}*/
