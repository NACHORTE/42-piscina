/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:37:48 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/15 14:38:58 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power, int start)
{
	if (power > 1)
	{
		nb = nb * start;
		power--;
		return (ft_iterative_power(nb, power, start));
	}
	return (nb);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_iterative_power(nb, power, nb));
}
/*
int main(void)
{
    printf("%d", ft_recursive_power(3, 10)); 
}*/
