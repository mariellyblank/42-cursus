/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:39:24 by mblank            #+#    #+#             */
/*   Updated: 2022/11/07 15:52:11 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

/* #include <stdio.h>

int	main(void)
{
	size_t n = 5;
	char a[] = "cinco letras trocadas";
	ft_memset(a + 5, '.', 5*sizeof(char));
	printf("%s", a);
}
 */