/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:02:52 by mblank            #+#    #+#             */
/*   Updated: 2022/11/21 15:13:11 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str1;

	i = 0;
	str1 = (char *)malloc(sizeof(char));
	if (!s || !str1)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
	{
		str1 = malloc(1);
		*str1 = '\0';
		return (str1);
	}
	if (ft_strlen(s) - start >= len)
		str1 = (char *)malloc(sizeof(char) * (len + 1));
	else
		str1 = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	while (s[start] && i < len && start < ft_strlen(s))
	{
		str1[i] = s[start];
		i++;
		start++;
	}
	str1[i] = '\0';
	return (str1);
}

/* #include <stdio.h>
int main()
{
	char src[] = "substr function Implementation";
 
	int m = 7;
	int n = 12;
 
	char* dest = ft_substr(src, m, n);
 
	printf("%s\n", dest);
 
	return 0;
}
 */