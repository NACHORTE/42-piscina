/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:36:10 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/15 14:37:12 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	start;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	start = nb;
	while (--power > 0)
		nb = nb * start;
	return (nb);
}
/*
int main(void)
{
    printf("%d", ft_iterative_power(1, -2)); 
}*/
