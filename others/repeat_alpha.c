/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:41:50 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/09/14 16:19:52 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char*argv[])
{
	int	i;
	int	l;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			l = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				l = argv[1][i] - 65;
				while (l >= 0)
				{
					write(1, &argv[1][i], 1);
					l--;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				l = argv[1][i] - 97;
				while (l >= 0)
				{
					write(1, &argv[1][i], 1);
					l--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
