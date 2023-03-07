/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:04:04 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/16 12:27:14 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int	main(int c, char **v)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	ft_sort_char_tab(v, c);
	while (c > 1)
	{
		while (v[i][j] != '\0')
		{
			write (1, &v[i][j], 1);
			j++;
		}
		write (1, &"\n", 1);
		j = 0;
		i++;
		c--;
	}
	return (0);
}
