#include <stdio.h>

void	*ulstr(char*str)
{
	int i;
	i = 0;
	if (str[0] == '\0')
		write(1, '\n', 1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
char input[] = "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification.";
    char *result = ulstr(input);
    printf("%s\n", result);
    return 0;
}
