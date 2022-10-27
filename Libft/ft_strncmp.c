/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:02:30 by mblank            #+#    #+#             */
/*   Updated: 2022/10/27 16:46:46 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	i;
    unsigned int    n;
	int				dif;

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
