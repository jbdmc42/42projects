/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbdmc <jbdmc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:27:34 by jbdmc             #+#    #+#             */
/*   Updated: 2025/02/25 22:53:11 by jbdmc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src) // declara uma função que retorna um ponteiro para um char (neste caso char *dest) e declara dois ponteiros como argumentos
{
	char *tempp = dest; // guarda a alocação de memória original da string
	
	while (*src) // verifica o conteúdo apontado pelo ponteiro até encontrar \0 (carater nulo)
	{
		*dest = *src; // iguala a string do ponteiro dest ao ponteiro src um carater de cada vez
		dest++; // passa para o carater seguinte em dest
		src++; // passa para o carater seguinte em src
	}
	*dest = '\0'; // adiciona o terminador de string (carater nulo)

	return(tempp); // retorna o ponteiro dest para a sua alocação de memória original
}

int		main(void)
{
	char src[] = "source"; // declara a string de origem (source)
	char dest[7] = "dest"; // declara a string de destino (destiny) com um buffer (espaço alojado) de 7 bytes

	printf("Before: %s\n", dest);
	ft_strcpy(dest, src); // passa as duas strings para os pointers como parametros
	printf("After: %s\n", dest);
	return(0);
}