# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblank <mblank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 11:08:56 by mblank            #+#    #+#              #
#    Updated: 2022/12/06 11:14:52 by mblank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c 

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -rf
CFLAGS = -Werror -Wextra -Wall 

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS) $(INC)

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIBFT)/libft.a

re:	fclean all

norm:
			@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm