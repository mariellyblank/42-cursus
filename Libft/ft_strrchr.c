/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:22:43 by mblank            #+#    #+#             */
/*   Updated: 2022/11/21 15:12:53 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	chtr;
	int		i;

	str = (void *)s;
	chtr = c;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == chtr)
		{
			return (&str[i]);
		}
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	a[] = "huasu";
	const char	b = 'a';

	printf("%s", ft_strrchr (a, b));
	return (0);
}
 */