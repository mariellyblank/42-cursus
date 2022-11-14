# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblank <mblank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 13:28:54 by mblank            #+#    #+#              #
#    Updated: 2022/11/14 17:59:55 by mblank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strncmp.c \
	ft_strnstr.c ft_strlcpy.c ft_toupper.c ft_tolower.c \
	ft_memchr.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_memmove.c \
	ft_memcpy.c ft_split.c\

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -rf
CFLAGS = -Werror -Wextra -Wall 

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@$(RM) $(OBJS) 

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all
