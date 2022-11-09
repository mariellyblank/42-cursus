/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:05 by mblank            #+#    #+#             */
/*   Updated: 2022/11/09 12:31:19 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (!dest_ptr && !src_ptr)
		return (NULL);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	size_t n = 5;
	char a[] = "cinco letras trocadas";
	char b[] = "banana final";
	ft_memcpy(a + 6, b, 5*sizeof(char));
	printf("%s", a);
} */