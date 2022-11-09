/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:22:43 by mblank            #+#    #+#             */
/*   Updated: 2022/11/09 12:32:36 by mblank           ###   ########.fr       */
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
	i = -1;
	while (str[i] != '\0')
	{	
		i--;
		if (str[i] == chtr)
		{
			return (&str[i]);
			i++;
		}
		return (0);
	}
	return (0);
}

int	main(void)
{
	const char	a[] = "huasu";
	const char	b = 'a';

	printf("%s", ft_strrchr (a, b));
	return (0);
}
