/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:32:45 by mblank            #+#    #+#             */
/*   Updated: 2022/10/26 18:37:47 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	src_len;
	unsigned int	dst_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
	{
		dst_len++;
	}
	while (src[src_len] != '\0' && src_len < size)
	{
		dst[dst_len] = src[src_len];
		dst_len++;
		src_len++;
	}
	dst[dst_len] = '\0';
	return (dst_len);
}

#include <stdio.h>
int   main(void)
{
		char a[] = "acbkkkd";
		char b[] = "efghijklkkkjjjjmn";
				unsigned int    n = 6;
		printf("%ld", ft_strlcat(a, b, n));
}
