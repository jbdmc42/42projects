#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] < s2[i] || s1[i] == '\0')
		{
			return (-1);
		}
		else if (s1[i] > s2[i] || s2[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char			str1[50] = "ABCDEFGHIJ";
	char			str2[50] = "ABCD";
	unsigned int	n = 10;
	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}