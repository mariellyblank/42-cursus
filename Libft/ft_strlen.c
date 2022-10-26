/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:40:01 by mblank            #+#    #+#             */
/*   Updated: 2022/10/26 12:49:29 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (*str != '\0')
	{
		++c;
		++ str;
	}
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "a vida e maravilhosa";
	printf("%ld", ft_strlen(str1));
}*/
