/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:05:31 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/19 16:05:38 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0x7fffffff)
		return (1);
	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	primo;

	primo = 0;
	while (!primo)
	{
		if (nb <= 1)
			return (2);
		primo = ft_is_prime(nb);
		if (primo)
			return (nb);
		nb++;
	}
	return (nb);
}
/*
int main()
{
    printf("%d", ft_find_next_prime(0x7fffffff));

    return 0;
}*/
