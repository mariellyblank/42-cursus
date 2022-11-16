/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:09 by mblank            #+#    #+#             */
/*   Updated: 2022/11/16 14:14:37 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc (nmem * size);
	i = 0;
	if (!mem)
		return (0);
	while (i < nmem * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

/* #include <stdio.h>

int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered: 3");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
	  scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
	  printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
} */