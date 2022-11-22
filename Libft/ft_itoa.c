/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:33:34 by mblank            #+#    #+#             */
/*   Updated: 2022/11/22 13:38:46 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lenregr(long long n, char *str)
{
	if (n >= 10)
		str = ft_lenregr(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	str[15];

	if (n < 0)
	{
		str[0] = '-';
		ft_lenregr(((long long)n * -1), &str[1]);
	}
	else
		ft_lenregr(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}
