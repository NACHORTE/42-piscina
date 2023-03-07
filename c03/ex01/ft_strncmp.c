/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:46:20 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/11 15:52:35 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	aux;

	if (n == 0)
		return (0);
	aux = 0;
	while (*s1 != '\0' && (*s1 == *s2) && (aux < n - 1))
	{
		s1++;
		s2++;
		aux++;
	}
	return (*s1 - *s2);
}
/*
int main(void)
{
	char *a, *b;
	a = "adios";
	b = "adiot";
	int x,y;
	y = strncmp(a,b,4);
	x = ft_strncmp(a,b,4);
	printf(" %d\n %d\n", y, x);
}*/
