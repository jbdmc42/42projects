/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:57:35 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/26 16:01:31 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	bool	b;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i] < 127)
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
		ft_str_is_printable(str);
	}
	return (0);
}

/*int	main(void)
{
	char	str[100] = "\\";

	aux(str);
	return (0);
}*/
