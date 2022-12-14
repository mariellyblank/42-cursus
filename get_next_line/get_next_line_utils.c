/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:07:47 by mblank            #+#    #+#             */
/*   Updated: 2022/12/22 16:34:01 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	return (i);	
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	y;
	char	*str;

	i = 0;
	y = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !str)
		return (NULL);
	while (s1 && s1[y])
		str[i++] = s1[y++];
	y = 0;
	while (s2 && s2[y] != '\n')
		str[i++] = s2[y++];
	if (s2[y] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	free (s1);
	return (str);
}

int	organizer(char *buf)
{
	int	i;
	int	y;
	int	isnwl;

	i = 0;
	y = 0;
	isnwl = 0;
	while (buf[i])
	{
		if (isnwl)
			buf[y++] = buf[i];
		if (buf[i] == '\n')
			isnwl = 1;
		buf[i++] = '\0';
	}
	return (isnwl);
}
