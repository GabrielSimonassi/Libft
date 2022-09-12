# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsimonas <gsimonas@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 12:43:31 by gsimonas          #+#    #+#              #
#    Updated: 2022/09/12 09:41:53 by gsimonas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_bzero.c ft_atoi.c ft_strtrim.c ft_calloc.c\
			ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c \
			ft_memchr.c	ft_memcmp.c	ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
			ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
			ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_substr.c ft_tolower.c ft_toupper.c \
			ft_hex.c ft_printf.c ft_ptr.c ft_putchar.c ft_putnbr.c \
			ft_putstr.c ft_utoa.c \


OBJS	=	$(SRCS:.c=.o)

NAME	=	libft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)			
clean:
			$(RM) $(OBJS) $(NAME)

fclean:		$(clean)
			$(RM) $(NAME) $(OBJS)

re:	fclean all

.PHONY: all clean fclean re
