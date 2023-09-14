/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:54:50 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/29 18:32:27 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char*str)
{
	int	i;
	int	ret;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ret = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (ret);
}

/*int   main(void)
{
        char    arr[] = "lkjba22skdjbflkjasdjfb";
        printf("%i", ft_str_is_lowercase(arr));

        char    arr1[] = "acb";
        printf("%i", ft_str_is_lowercase(arr1));

        char    arr2[] = "123";
        printf("%i", ft_str_is_lowercase(arr2));

        char arr3[] = "\0";
        printf("%i", ft_str_is_lowercase(arr3));

        return (0);
}*/
