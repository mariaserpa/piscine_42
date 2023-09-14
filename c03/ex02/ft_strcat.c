/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:26:14 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/03 18:36:17 by mrabelo-         ###   ########.fr       */
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

char	*ft_strcat(char*dest, char*src)
{
	int	l;
	int	i;

	i = 0;
	l = ft_strlen(dest);
	while (src[i] != '\0')
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
	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s1, s2));
}*/
