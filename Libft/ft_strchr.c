/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:56:55 by mblank            #+#    #+#             */
/*   Updated: 2022/10/31 17:42:07 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//algo ta mal
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
	while(i <= j)
	{
		if (str[i] == chtr)
			{
				return (&str[i]);
			}
			j++;	
	}
	while (str[i] != '\0')
		i++;
	return (NULL);
}
//ta mal
int	main(void)
{
	const char	a[] = "huasu";
	const char b = 'a';
	char *ret;
	printf("String after |%c| is - |%s|\n", b, ret);
	return 0;
}

