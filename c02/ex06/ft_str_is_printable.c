/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:07:43 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/10 13:17:53 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	aux;
	int	printable;

	aux = 0;
	printable = 0;
	if (str[aux] == '\0')
		return (1);
	while (str[aux] != '\0')
	{
		if (str[aux] >= ' ' && str[aux] < 127)
			printable = 1;
		else
		{
			printable = 0;
			return (printable);
		}
		aux++;
	}
	return (printable);
}
