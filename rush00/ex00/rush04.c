/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:14:22 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/26 18:29:32 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == x && j == y && j != 1 && i != 1) || (i == 1 && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == y) || (i == x && j == 1))
				ft_putchar('C');
			else if ((i > 1 && i < x) && (j > 1 && j < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
