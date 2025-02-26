/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:57:35 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/26 17:00:15 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			*str = *str - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[100] = "AaBbCcDd";
	
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
