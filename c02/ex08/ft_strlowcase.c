/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:01:00 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/31 18:39:53 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int   main(void)
{
        char    arr[] = "AAAAaskdjbflkjasdjfb";
        printf("%s\n", ft_strlowcase(arr));

        char    arr1[] = "ABC";
        printf("%s\n", ft_strlowcase(arr1));

        return (0);
}*/
