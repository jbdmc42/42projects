/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdmc <jbdmc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:48:22 by jbdmc             #+#    #+#             */
/*   Updated: 2025/02/23 16:00:07 by jbdmc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    char c;
    if(n < 0)
    {
        c = 'N';
        write(1, &c, 1);
    }
    else
    {
        c = 'P';
        write(1, &c, 1);
    }
}

/*int main(void)
{
    ft_is_negative(0);
    return(0);
}*/