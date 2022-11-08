/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:26:09 by mblank            #+#    #+#             */
/*   Updated: 2022/11/08 16:09:26 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n < i)
	{
		*ptr = '\0';
		ptr++;
	}
}
//solucao:usar memset '\0'!
#include <stdlib.h>
#include <string.h>

int main( void )
  {
    char buffer[80];

    ft_bzero( buffer, 80 );
    return EXIT_SUCCESS;
  }
