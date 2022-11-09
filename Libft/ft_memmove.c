/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:57:07 by mblank            #+#    #+#             */
/*   Updated: 2022/11/09 12:31:28 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (dest_ptr <= src_ptr)
	{
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	else if (dest_ptr > src_ptr)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n--)
		{
			*(--dest_ptr) = *(--src_ptr);
		}
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	size_t n = 5;
	char a[] = "cinco letras trocadas";
	char b[] = "banana final";
	ft_memmove(a + 6, b, 5*sizeof(char));
	printf("%s", a);
} */