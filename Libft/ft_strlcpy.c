/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:40:28 by mblank            #+#    #+#             */
/*   Updated: 2022/10/31 14:18:44 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	int i;
    
    i = 0;
    if (dst_size == '\0')
        return (0);
    while( i < dst_size && src[i])
    {
       ((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
        i++;
    }
    return (dst[i]);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "abcdef";
	char b[] = "2222";
    
    ft_strlcpy(a, b, 3);
    printf("%s", a);
}*/

/*{
	size_t	i;
	size_t	src_size;

	if (!dst || !src)
		return (0);
	src_size = ft_strlen(src)
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
	return (src_size);
}*/