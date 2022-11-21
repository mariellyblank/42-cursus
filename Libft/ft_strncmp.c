/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:02:30 by mblank            #+#    #+#             */
/*   Updated: 2022/11/21 11:56:52 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	dif;

	i = 0;
	dif = 0;
	while ((i < n) && !dif && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		dif = ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	if ((i < n) && !dif && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		dif = ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (dif);
}
