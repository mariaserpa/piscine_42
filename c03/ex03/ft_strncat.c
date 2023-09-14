/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:37:24 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/03 18:51:15 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strlen(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char*dest, char*src, unsigned int nb)
{
	unsigned int	l;
	unsigned int	i;

	i = 0;
	l = ft_strlen(dest);
	while (src[i] != '\0' && nb > i)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char s1[] = "ABA";
	char s2[] = "ABCDEFGHIJK";
	unsigned int size = 6;

	printf("%s\n", ft_strncat(s1, s2, size));
}*/
