/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:37:10 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/29 18:59:35 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char*str)
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
		if (str[i] >= 32 && str[i] <= 126)
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
        printf("%i", ft_str_is_printable(arr));

        char    arr1[] = "ABC";
        printf("%i", ft_str_is_printable(arr1));

        char    arr2[] = "123";
        printf("%i", ft_str_is_printable(arr2));

        char arr3[] = "\0";
        printf("%i", ft_str_is_printable(arr3));

        return (0);
}*/
