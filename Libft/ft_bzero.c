/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:09 by mblank            #+#    #+#             */
/*   Updated: 2022/11/08 16:36:44 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = '\0'; //ha necessidade de estudar essa estrutura de ptr
		i++;
	}
}

//solucao possivel vista em mais de um lugar :usar memset '\0'!
//mas para isso, precisa botar makefile pra funcionar
/* #include <stdio.h>
#include <string.h>

int main( void )
  {
    char str[] = "abcd";

    ft_bzero( str, 2 );
    printf("%s", str);
  } */
//teste abaixo ainda nao esta bom, dda stack smashing detected
#include <stdio.h>

int	main(void)
{
	size_t n = 5;
	char a[] = "cinc";
	ft_bzero(a + 5, 3*sizeof(char)); //precisa verificar se esta correto chamar a afuncao assim
	printf("%s", a);
}
