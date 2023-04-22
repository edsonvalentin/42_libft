/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haystackhaystack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:45:10 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/14 16:45:12 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: 
** Librairy: 
** Synopsis:
** Description: 
** Return value:
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	char	*str;
	char	*substr;

	str = (char*)haystack;
	substr = (char*)needle;
	i = 0;
	if (needle[0] == '\0')
		return (str);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
		{
			if (needle[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
  
int main(){
 	char	* ponteiro;
 	char	fonte[] = "Programa de Ensino e Tutoria - BCC";
	char	comparacao[] = "Ensino";
  
	printf("String 'fonte': \t\t%s\n", fonte);
	printf("Substring 'comparacao': \t%s\n\n", comparacao);
      
	ponteiro = ft_strstr(fonte, comparacao);
      
	if(ponteiro != NULL)
	{
		printf("Substring encontrada!\n");
		printf("Substring inicia na posição %ld\n", ponteiro - fonte);
	}
	else
	{
		printf("Substring não encontrada!\n");
	}
	return 0;
}	
