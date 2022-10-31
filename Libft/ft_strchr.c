/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:56:55 by mblank            #+#    #+#             */
/*   Updated: 2022/10/31 14:10:40 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i] != c)
        i++;
    if (s[i] == c)
    {
       return (s[i]);
    }   
    return(0);
}

#include<stdio.h>
int main(void)
{
    char    a[] = "245";
    char    b[] = "925";
    printf("ld%", ft_strchr(a, b));
}
