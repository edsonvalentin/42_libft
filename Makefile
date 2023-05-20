# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evalenti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 17:23:41 by evalenti          #+#    #+#              #
#    Updated: 2023/04/22 17:28:04 by evalenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME	:= libft.a
		
SRCS :=	ft_calloc.c      ft_atoi.c         ft_isprint.c    ft_strlen.c\
		ft_strchr.c      ft_strrchr.c      ft_strncmp.c    ft_strnstr.c\
		ft_isalpha.c     ft_isdigit.c      ft_isalnum.c    ft_isascii.c\
		ft_strlcpy.c     ft_strlcat.c      ft_toupper.c    ft_tolower.c\
		ft_bzero.c       ft_memcpy.c       ft_memmove.c\
		ft_memchr.c      ft_memcmp.c       ft_memset.c     ft_strdup.c\
		ft_strjoin.c	 ft_substr.c	   ft_strtrim.c	   ft_split.c\
		ft_itoa.c		 ft_strmapi.c	   ft_striteri.c   ft_putchar_fd.c\
		ft_putstr_fd.c	 ft_putendl_fd.c   ft_putnbr_fd.c\


BONUS := ft_lstnew.c	 ft_lstadd_front.c ft_lstsize.c	   ft_lstlast.c\
		 ft_lstadd_back.c ft_lstdelone.c   ft_lstclear.c   ft_lstiter.c\
		 ft_lstmap.c

SRCS_O	:= $(SRCS:.c=.o)
BONUS_O	:= $(BONUS:.c=.o)

OBJS	:= $(SRCS_O) $(BONUS_O)

CC		:= cc
RM		:= /bin/rm -f
CFLAGS	:= -Wall -Wextra -Werror -I.

CL := ar rc
RL := ranlib

$(NAME): $(SRCS_O)
	$(CL) $(NAME) $(SRCS_O)
	$(RL) $(NAME)

bonus: $(BONUS_O) $(SRCS_O)
	$(CL) $(NAME) $(BONUS_O) $(SRCS_O)
	$(RL) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
