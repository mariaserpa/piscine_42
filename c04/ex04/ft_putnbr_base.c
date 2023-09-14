/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:00:50 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/07 16:45:20 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_invalid_argument(char*str)
{
	int	l;
	int	i;
	int	j;

	l = ft_strlen(str);
	i = 0;
	j = 1;
	if (str[0] == '\0' || l == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char*base)
{
	long int	l;
	long int	n;

	l = ft_strlen(base);
	n = nbr;
	if (ft_is_invalid_argument(base) == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n < l)
			ft_putchar(base[n]);
		if (n >= l)
		{
			ft_putnbr_base(n / l, base);
			ft_putnbr_base(n % l, base);
		}
	}
}

/*int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "-0123456789abcdef");
}*/
