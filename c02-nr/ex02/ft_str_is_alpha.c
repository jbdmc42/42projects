/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaobarb <joaobarb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:51:54 by joaobarb          #+#    #+#             */
/*   Updated: 2025/02/26 15:16:03 by joaobarb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	b;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
		ft_str_is_alpha(str);
	}
	return (0);
}

/*int	main(void)
{
	char	str[20] = "fhaguiefhbbsaga";

	aux(str);
	return (0);
}*/
