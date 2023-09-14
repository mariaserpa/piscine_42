/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:31:56 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/29 18:31:05 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char*str)
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
		if (str[i] >= '0' && str[i] <= '9')
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
        char    arr[] = "121212121212121212121212lkjba22skdjbflkjasdjfb";
        printf("%i", ft_str_is_numeric(arr));
        
        char    arr1[] = "acb";
        printf("%i", ft_str_is_numeric(arr1));

        char    arr2[] = "123";
        printf("%i", ft_str_is_numeric(arr2));

        char arr3[] = "\0";
        printf("%i", ft_str_is_numeric(arr3));
        
        return (0);
}*/
