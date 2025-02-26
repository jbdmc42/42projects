/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:39:40 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/26 14:40:20 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*tempp;
	unsigned int	i;

	tempp = dest;
	i = 0;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (tempp);
}

/*int	main(void)
{
	char	src[15] = "Hello World!?!";
	char	dest[15] = "Only 10c";
	unsigned int n = 10;
	printf("Before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("After: %s", dest);
	return (0);  
}*/
