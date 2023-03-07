/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:41:31 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/15 14:42:28 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index >= 2)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (index);
}
/*
int main(void)
{
    printf("%d", ft_fibonacci(5));
}*/
