# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmasstou <mmasstou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 15:54:55 by mmasstou          #+#    #+#              #
#    Updated: 2021/11/24 18:46:08 by mmasstou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
CFLAGS 		= -Wall -Wextra -Werror 
CC = cc
SRCS =	ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memmove.c \
		ft_calloc.c \
		ft_bzero.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_split.c \

BONUS = \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
	


OBJS	= $(SRCS:.c=.o)
B_OBJS	= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
bonus: $(B_OBJS) $(OBJS) 
	ar rc $(NAME) $(OBJS) $(B_OBJS)
	
clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re