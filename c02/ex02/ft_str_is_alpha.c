/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:09:34 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/29 18:29:45 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char*str)
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
		if ((str[i] >= 'A' && str[i] <= 'Z') || 
			(str[i] >= 'a' && str[i] <= 'z'))
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

/*int	main(void)
{
	char	arr[] = "hgfiofaurnr23jfaa";
	printf("%i", ft_str_is_alpha(arr));
	
	char	arr1[] = "acb";
	printf("%i", ft_str_is_alpha(arr1));

	char	arr2[] = "123";
	printf("%i", ft_str_is_alpha(arr2));

	char arr3[] = "\0";
	printf("%i", ft_str_is_alpha(arr3));
	
	return (0);
}*/
