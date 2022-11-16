/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:40:28 by mblank            #+#    #+#             */
/*   Updated: 2022/11/16 16:30:38 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dst_size != 0)
	{
		while (src[i] != '\0' && i < (dst_size -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (dst_size != 0)
	{
		while (i < (dst_size -1) && src[i] != '\0')
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
        return (0);
    return (ft_strlen(src));
}
 */
/* #include <stdio.h>
int	main(void)
{
	char a[] = "abcdef";
	char b[] = "2222";
	
	ft_strlcpy(a, b, 3);
	printf("%s", a);
}*/