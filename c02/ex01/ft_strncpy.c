/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:55:17 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/03 16:13:17 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char*dest, char*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "42 Berlin";
	char dest[20];
	int n = 3;

	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}*/
