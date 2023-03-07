/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:02:09 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/10 13:17:26 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	aux;
	int	lower;

	aux = 0;
	lower = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'a' && str[aux] <= 'z')
			lower = 1;
		else
		{
			lower = 0;
			return (lower);
		}
		aux++;
	}
	return (lower);
}
