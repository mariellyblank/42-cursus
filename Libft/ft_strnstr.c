/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:35:33 by mblank            #+#    #+#             */
/*   Updated: 2022/11/21 15:11:15 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		y = 0;
		while (little[y] != '\0')
		{
			if (big[i + y] == little[y] && (size_t)(i + y) < len)
				y++;
			else
				break ;
		}
		if (little[y] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	a[] = "iaisuuuuuuuuuuiaijjjjjjjjj";
	char	b[] = "su";

	printf("%s", ft_strnstr(a, b, 4));
} */