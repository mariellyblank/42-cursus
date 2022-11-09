/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:56:55 by mblank            #+#    #+#             */
/*   Updated: 2022/11/09 12:31:44 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;
	char	chtr;

	i = 0;
	j = 0;
	str = (void *)s;
	chtr = c;
	while (str[j] != '\0')
		j++;
	while (i <= j)
	{
		if (str[i] == chtr)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	a[] = "huasu";
	const char	b = 'u';

	printf("%s", ft_strchr (a, b));
	return (0);
}
 */