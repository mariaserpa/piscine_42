/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:35:21 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/23 20:00:30 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		f_putchar(n);
		n++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
