/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:37 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/07 15:26:47 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	str_len(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char*dest, char*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	x = str_len(dest);
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	i = 0;
	if (size != 0 && size > j)
	{
		while (src[i] != '\0' && j <= size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (x + str_len(src));
}

/*int	main(void)
{
	char s1[20] = "Hello, ";
	char s2[] = "World";
	printf("%d\n", ft_strlcat(s1, s2, 14));
	printf("%s\n", s1);
}*/
