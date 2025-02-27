#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 < *s2 || *s1 == '\0')
		{
			return (-1);
		}
		else if (*s1 > *s2 || *s2 == '\0')
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	main(void)
{
	char	str1[50] = "ABC";
	char	str2[50] = "ABC";
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}