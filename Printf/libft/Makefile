# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblank <mblank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 16:08:52 by mblank            #+#    #+#              #
#    Updated: 2022/12/06 16:16:25 by mblank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Standard

NAME		=	libft.a
INCLUDES	=	../include
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#Sources

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memset.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_toupper.c \
	ft_tolower.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_split.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\
	
OBJS = $(SRCS:.c=.o)

###

OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo "$(GREEN)Libft compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
			@mkdir -p $(OBJS_DIR)

clean:
			@$(RM) -rf $(OBJS_DIR)
			@$(RM) -f $(OBJSF)
			@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm