/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:51:04 by iortega-          #+#    #+#             */
/*   Updated: 2023/02/12 15:13:44 by iortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind)
{
	int		length;
	char	*find;

	find = tofind;
	length = 0;
	while (*str != '\0' && *find != '\0')
	{
		if (*str == *find)
		{
			find++;
			length++;
		}
		else
		{
			find = tofind;
			length = 0;
		}
		str++;
	}
	if (*find == '\0')
		str = str - length;
	if (*str == '\0')
		return (0);
	return (str);
}
int main(int c, char **v)
{
	printf("%s\n", ft_strstr(v[1],v[2]));
}
