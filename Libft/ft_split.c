/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:20:47 by mblank            #+#    #+#             */
/*   Updated: 2022/11/16 14:04:26 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	i;
	int	chr;

	i = 0;
	chr = 0;
	while (*s)
	{
		if (*s != c && chr == 0)
		{
			chr = 1;
			i++;
		}
		else if (*s == c)
			chr = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	y;
	size_t	z;
	char	*small;
	char	**big;

	if (!(big = (char **)malloc(sizeof(ft_count(s, c) + 1) * sizeof(*big))))
		return (0);
	i = 0;
	y = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			return (NULL);
		x = 0;
		while (s[i + x] != '\0' && s[i + x] != c)
			x++;
		if (!(small = (char *)malloc((x + 1) * sizeof(char))))
			return (0);
		z = 0;
		while (z < x)
		{
			small[z] = s[i];
			z++;
			i++;
		}
		small[x] = '\0';
		big[y] = small;
		y++;
	}
	big[y] = small;
	return (big);
}

/* #include <stdio.h>

int main()
{
	char a[] = "test z um";
	char **temp;
	temp = ft_split(a, ' ');
	printf("%s", temp[2]);
} */
