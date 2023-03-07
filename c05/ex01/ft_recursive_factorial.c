/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:32:40 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/15 14:35:25 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb, int next)
{
	if (next > 1)
	{
		nb = nb * (next - 1);
		next--;
		return (ft_iterative_factorial(nb, next));
	}
	return (nb);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_iterative_factorial(nb, nb));
}
/*
int main(void)
{
 printf(" %d ", ft_recursive_factorial(4));   
}*/
