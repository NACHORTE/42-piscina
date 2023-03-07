/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:16:59 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/09 15:22:06 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	int	is;

	is = 0;
	if (c >= 'a' && c <= 'z')
		is = 1;
	if (c >= 'A' && c <= 'Z')
		is = 1;
	if (c >= '0' && c <= '9')
		is = 1;
	return (is);
}

char	*ft_strcapitalize(char *str)
{
	int	aux;
	int	first;

	aux = 0;
	first = 1;
	while (str[aux] != '\0')
	{
		if (first == 1 && str[aux] >= 'a' && str[aux] <= 'z')
			str[aux] = (str[aux] - 'a') + 'A';
		if (first == 0 && str[aux] >= 'A' && str[aux] <= 'Z')
			str[aux] = (str[aux] - 'A') + 'a';
		if (is_alphanum(str[aux]))
			first = 0;
		else
			first = 1;
		aux++;
	}
	return (str);
}

/*
int	main(void)
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *co = ft_strcapitalize(c);
	printf("%s ", co);
}*/
