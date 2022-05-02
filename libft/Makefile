# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 12:37:32 by pcoimbra          #+#    #+#              #
#    Updated: 2022/05/02 14:55:16 by pcoimbra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_substr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strjoin.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_calloc.c \
		ft_bzero.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_back.c ft_lstsize.c ft_lstadd_front.c ft_lstlast.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

HEAD = includes

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RANLIB = ranlib

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${RANLIB} ${NAME}

all: ${NAME}

bonus : ${OBJS} ${OBJS_BONUS}
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all fclean clean re
