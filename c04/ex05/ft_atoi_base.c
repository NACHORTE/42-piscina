/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:33:54 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/20 14:57:57 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (*str != '\0')
	{
		aux++;
		str++;
	}
	return (aux);
}

int	ok_base(char *base, int len)
{
	int		i;
	int		j;

	j = 1;
	i = 0;
	if (*base == '\0' || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0' || j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	convert(char c, char *base, int len, int i)
{
	int	j;
	int	k;
	int	pos;

	pos = 0;
	k = 0;
	j = 1;
	while (i > 0)
	{
		j = j * len;
		i--;
	}
	while (c != base[k])
	{
		pos++;
		k++;
	}
	return (j * pos);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	neg;
	int	space;
	int	i;

	i = ft_strlen(str) - 1;
	if (!ok_base(base, ft_strlen(base)))
		return (0);
	space = 0;
	neg = 1;
	num = 0;
	while (*str != '\0')
	{
		if (*str == '-' || *str == '+')
			space = 1;
		if (*str < '0' || *str > '9')
			if (*str != '-' && *str != '+' && space == 1)
				return (num * neg);
		if (*str == '-' && num == 0)
			neg = -neg;
		num = num + convert(*str, base, ft_strlen(base), i);
		str++;
		i--;
	}
	return (num * neg);
}

int main(int c, char **v)
{
    printf("%d", ft_atoi_base("--100", "0123456789"));

    return 0;
}
