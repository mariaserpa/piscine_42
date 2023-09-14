/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabelo- <mrabelo-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:30:12 by mrabelo-          #+#    #+#             */
/*   Updated: 2023/08/30 16:33:48 by mrabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char*str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
			{
				str[i] -= 32;
				j = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char test1[] = "hello world";
	char test2[] = "Hello World";
	char test3[] = "lorem ipsum DO+LOR sit AME;T";
	char test4[] = "1st test case";
	char test5[] = "";
	char test7[] = "HELLO WORLD";
	char test8[] = "HeLLo W-orLd";
	char test9[] = "tHis Is a TeSt.";
	printf("Original: %s\n", a);
	ft_strcapitalize(a);
	printf("Capitalized: %s\n", a);
	printf("Original: %s\n", test1);
	ft_strcapitalize(test1);
	printf("Capitalized: %s\n\n", test1);
	printf("Original: %s\n", test2);
	ft_strcapitalize(test2);
	printf("Capitalized: %s\n\n", test2);
	printf("Original: %s\n", test3);
	ft_strcapitalize(test3);
	printf("Capitalized: %s\n\n", test3);
	printf("Original: %s\n", test4);
	ft_strcapitalize(test4);
	printf("Capitalized: %s\n\n", test4);
	printf("Original: %s\n", test5);
	ft_strcapitalize(test5);
	printf("Capitalized: %s\n\n", test5);
	printf("Original: %s\n", test7);
	ft_strcapitalize(test7);
	printf("Capitalized: %s\n\n", test7);
	printf("Original: %s\n", test8);
	ft_strcapitalize(test8);
	printf("Capitalized: %s\n\n", test8);
	printf("Original: %s\n", test9);
	ft_strcapitalize(test9);
	printf("Capitalized: %s\n\n", test9);
	return (0);
}*/
