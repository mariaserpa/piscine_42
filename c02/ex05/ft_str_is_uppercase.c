/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:09:09 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/29 18:42:12 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char*str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
        char    arr[] = "AAAAa22skdjbflkjasdjfb";
        printf("%i", ft_str_is_uppercase(arr));

        char    arr1[] = "ABC";
        printf("%i", ft_str_is_uppercase(arr1));

        char    arr2[] = "123";
        printf("%i", ft_str_is_uppercase(arr2));

        char arr3[] = "\0";
        printf("%i", ft_str_is_uppercase(arr3));

        return (0);
}*/
