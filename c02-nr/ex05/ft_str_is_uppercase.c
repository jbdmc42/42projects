/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:44:25 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/26 15:45:19 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	bool	b;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			b = true;
		}
		else
		{
			b = false;
		}
		i++;
	}
	if (b)
	{
		write(1, "1", 1);
	}
	else
	{
		write(1, "0", 1);
	}
	return (0);
}

int	aux(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		write(1, "1", 1);
	}
	else
	{
		ft_str_is_uppercase(str);
	}
	return (0);
}

/*int	main(void)
{
	char	str[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	aux(str);
	return (0);
}*/
