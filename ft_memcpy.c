/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:41:48 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_memcpy
** Library: string.h
** Description: copies n bytes from memory area src to memory area dest. The
**              memory areas must not overlap.
** Return value: the pointer to dest.
** External functs: none
*/

#include <ctype.h>
#include <stddef.h>
#include<string.h>

//#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return(dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char csrc[100] = "Geeksfor";
    ft_memcpy(csrc + 5, csrc, strlen(csrc) + 1);
    printf("%s", csrc);
    return 0;
}

/*
int main(){

	// Declaracao das variaveis
	int a[10], b[10], i;
	
	printf("VALORES INICIAIS: A preenchido de 1 a 10 | B zerado\n\n");

	// Preenchemos o array a com numeros de 1 a 10 e o array b com zeros
	for (i = 0; i < 10; i++)
	{

		// Atrbuicao dos valores
		a[i] = i + 1;
		b[i] = 0;

		// Exibicao dos valores atuais
		printf("A %d -> %d\n", i, a[i]);
		printf("B %d -> %d\n", i, b[i]);

	}

	// Atraves da funcao memcpy, copiamos todos os dados contidos em a, para b
	ft_memcpy(b, a, sizeof(b));
	
	printf("\n\nVALORES APOS A COPIA DE MEMORIA\n\n");

	// Exibicao dos valores apos a copia de memoria
	for (i = 0; i < 10; i++)
	{
		printf("A %d -> %d\n", i, a[i]);
		printf("B %d -> %d\n", i, b[i]);
	}

}*/
