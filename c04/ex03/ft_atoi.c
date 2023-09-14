/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:47:40 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/05 15:52:59 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char*str)
{
	int	i;
	int	signal;
	int	number;

	signal = 0;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10; 
		number += str[i] - 48;
		i++;
	}
	if (signal % 2 != 0)
		return (-number);
	else
		return (number);
}

/*int	main(void)
{
	char s[] = "  ---+--+1234ab567";

	printf("%d\n", ft_atoi(s));
}*/
