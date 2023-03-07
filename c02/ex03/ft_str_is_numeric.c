/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:42:24 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/10 13:17:05 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	aux;
	int	numeric;

	aux = 0;
	numeric = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if (str[aux] >= '0' && str[aux] <= '9')
			numeric = 1;
		else
		{
			numeric = 0;
			return (numeric);
		}
		aux++;
	}
	return (numeric);
}
