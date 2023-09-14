/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:46:20 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/31 18:38:58 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int   main(void)
{
        char    arr[] = "AAAAaskdjbflkjasdjfb";
        printf("%s\n", ft_strupcase(arr));

        char    arr1[] = "ABC";
        printf("%s\n", ft_strupcase(arr1));

        return (0);
}*/
