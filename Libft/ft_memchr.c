/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:18:33 by mblank            #+#    #+#             */
/*   Updated: 2022/11/07 18:58:36 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*chr;

	i = 0;
	chr = (unsigned char *)s;
	while (i < n)
	{
		if (chr[i] == (unsigned char)c)
			return (&chr[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 11);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
} */
