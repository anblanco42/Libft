# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anblanco <anblanco@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 20:52:12 by anblanco          #+#    #+#              #
#    Updated: 2023/10/29 19:36:49 by anblanco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRC = ft_memset.c ft_bzero.c ft_isalnum.c ft_atoi.c ft_isalpha.c ft_isdigit.c\
		ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c ft_toupper.c\
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_strnstr.c ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c\

SRCBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
			ft_lstlast.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

CLEAN = rm -Rf

OBJS := $(SRC:.c=.o)

OBJSBONUS := $(SRCBONUS:.c=.o)

all: 		$(NAME) #el comando all ejecuta todo lo que se encuentra en su interior.

$(OBJS): %.o: %.c
			$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
			@ar r $(NAME) $(OBJS)

bonus: 		$(OBJSBONUS)
			@ar r $(NAME) $(OBJSBONUS)

$(OBJSBONUS): %.o: %.c
			$(CC) $(CFLAGS) -c $^ -o $@


clean: 
	@$(CLEAN) ./*.o

fclean: clean
	@$(CLEAN) ./*.a

re: fclean all 
.PHONY: all clean fclean bonus