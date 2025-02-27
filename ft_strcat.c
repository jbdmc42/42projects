#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*tempp;
	int		i;
	int		j;

	tempp = dest;
	i = 0;
	j = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	tempp = dest;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tempp);
}

int	main(void)
{
	char	dest[50] = "ABC";
	char	src[10] = "123";
	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}