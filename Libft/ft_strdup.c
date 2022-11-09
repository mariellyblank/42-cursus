/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:51:59 by mblank            #+#    #+#             */
/*   Updated: 2022/11/09 18:25:40 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//ta mal
char	*strdup(const char *s)
{
	char	*str2;
	int		i;
	int		size;
	
	size = 0;
	while (s[size])
		size++;
	if ((str2 = malloc(sizeof(char) * (size + 1))) == NULL)
		return(NULL);
	while ( i < size)
		{
			str2[i] = s[i];
			i++;
		}
	str2[i] = '\0';
	return (str2);
}
//segmentation fault (core dumped)
#include<stdio.h>

int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("%s", target);
    return 0;
}