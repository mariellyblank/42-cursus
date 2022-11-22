/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:10:52 by mblank            #+#    #+#             */
/*   Updated: 2022/11/22 14:48:32 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_start(const char *s1, char *set)
{
    size_t  i;
    size_t  len;
    
    i = 0;
    len = ft_strlen(s1);
    while (i < len)
    {
        if (ft_strchr(set, s1[i]) == 0)
            break ;
        i++;
    }
    return(i);
}

int ft_end(const char *s1, char *set)
{
    size_t  i;
    size_t  len;
    
    i = 0;
    len = ft_strlen(s1);
    while (i < len)
    {
        if (ft_strchr(set, s1[i -1]) == 0)
            break ;
        i++;
    }
    return(len - i);   
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
    
}
