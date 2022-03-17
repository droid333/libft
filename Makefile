# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 18:02:58 by slucas            #+#    #+#              #
#    Updated: 2022/03/17 17:59:08 by slucas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

RADICAL	= atoi.c \
		  bzero.c \
		  calloc.c \
		  isalnum.c \
		  isalpha.c \
		  isascii.c \
		  isdigit.c \
		  isprint.c \
		  memchr.c \
		  memcmp.c \
		  memcpy.c \
		  memmove.c \
		  memset.c \
		  strchr.c \
		  strdup.c \
		  strlcat.c \
		  strlcpy.c \
		  strlen.c \
		  strncmp.c \
		  strnstr.c \
		  strrchr.c \
		  tolower.c \
		  toupper.c \
		  substr.c \
		  strjoin.c \
		  strtrim.c \
		  split.c \
		  itoa.c \
		  strmapi.c \
		  striteri.c \
		  putchar_fd.c \
		  putstr_fd.c \
		  putendl_fd.c \
		  putnbr_fd.c

SRC		= $(addprefix ft_, $(RADICAL))

SRC_B	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c

OBJ		= $(SRC:.c=.o)

OBJ_B	= $(SRC_B:.c=.o)

CC		= gcc

AR		= ar rcs

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I. $< -o $@

$(NAME): $(OBJ)
	$(AR) $@ $^

bonus: $(OBJ_B)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
