/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:32:18 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/26 14:39:12 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*tempp;

	tempp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tempp);
}

/*int		main(void)
{
	char src[15] = "Hello World!?!";
	char dest[15] = "dest";

	printf("Before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After: %s\n", dest);
	return(0);
}*/
