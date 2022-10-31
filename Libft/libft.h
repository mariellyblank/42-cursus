/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:33:04 by mblank            #+#    #+#             */
/*   Updated: 2022/10/31 17:42:11 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

#define BUFFER_SIZE 1

//Prototypes

int	ft_isalnum(int c);
int	ft_str_is_alpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char *ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t ft_strlen(const char *str);
int ft_strcmp(const char *s1, const char *s2);
int ft_tolower(int c);
int ft_toupper(int c);

#endif