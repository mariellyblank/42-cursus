/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nope_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:40:28 by mblank            #+#    #+#             */
/*   Updated: 2022/10/26 18:01:24 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	
}

//possivel solucao para simplificar = usar unsigned char
//pointers cast - search about it.

int	main(void)
{
	char a[] = "abcdef";
	char b[] = "2222";
	unsigned int x = 2;
	unsigned int y = 1;

	printf("%ld\n", ft_strlcpy(a, b, x));
	printf("%ld", ft_strlcpy(a, b, y));
}


/*{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] || i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dst[i] = '\0')
		i = 0;
	while (src [i])
		i++;
	return (i);
}*/