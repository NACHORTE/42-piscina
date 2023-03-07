/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:30:13 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/15 14:32:10 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = nb;
	while (result > 1)
	{
		nb = nb * (result - 1);
	result--;
	}
	return (nb);
}
/*
int main(void)
{
 printf(" %d ", ft_iterative_factorial(2));   
}*/
