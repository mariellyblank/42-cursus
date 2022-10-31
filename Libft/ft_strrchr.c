/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:22:43 by mblank            #+#    #+#             */
/*   Updated: 2022/10/31 17:42:08 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//function returns a pointer to the last occurrence of the character c in the string s.
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chtr;
	char	*str;

	chtr = c;
	str = (void *)s;
	i = 0;
	while (str[i] != '\0')
		i++;
	if (str[i] == chtr)
	{
		return (&str[i]);
	}
	return (NULL);
}

int	main(void)
{
	char	a[] = "245";
	char	b[] = "925";
	
	printf("%s", ft_strchr(a, b));
}

