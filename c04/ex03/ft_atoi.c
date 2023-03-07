/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:05:21 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/15 12:35:56 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	neg;
	int	space;

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
		else if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');
		str++;
	}
	num = num * neg;
	return (num);
}
/*
int main (void)
{
	char *c;
	int n;
	c = " --+-12 34 -ab567";
	n = ft_atoi(c);
	printf(" %d ", n);
}*/
