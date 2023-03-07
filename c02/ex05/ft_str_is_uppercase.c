/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:04:50 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/11 14:45:13 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	aux;
	int	upper;

	aux = 0;
	upper = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'A' && str[aux] <= 'Z')
			upper = 1;
		else
		{
			upper = 0;
			return (upper);
		}
		aux++;
	}
	return (upper);
}
