/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:52:07 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/04 13:56:21 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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

unsigned int	ft_strlcpy(char*dest, char*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = str_len(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

/*int	main(void)
{
	char test[] = "Hello, World";
	char dest[50];
	printf("%d\n", ft_strlcpy(dest, test, 7));
	printf("%s\n", dest);
}*/
