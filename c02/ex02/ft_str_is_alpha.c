/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:28:36 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/10 13:20:47 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	aux;
	int	alpha;

	aux = 0;
	alpha = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if (str[aux] >= 'a' && str[aux] <= 'z')
			alpha = 1;
		else if (str[aux] >= 'A' && str[aux] <= 'Z')
			alpha = 1;
		else
		{
			alpha = 0;
			return (alpha);
		}
		aux++;
	}
	return (alpha);
}
