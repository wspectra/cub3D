# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wspectra <wspectra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 16:30:12 by wspectra          #+#    #+#              #
#    Updated: 2020/11/10 18:21:51 by wspectra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c\
		ft_strlen.c ft_strlcpy.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c\
		ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strrchr.c ft_strnstr.c\
		ft_strchr.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_split.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c ft_itoa.c\
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		ft_lstmap.c get_next_line.c

OBJS	= $(SRCS:.c=.o)

INCL	= libft.h

CC		= gcc

RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
%.o: %.c $(INCL)
		$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:
		all, clean, fclean, re
