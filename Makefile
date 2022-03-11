# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slucas <slucas@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 18:02:58 by slucas            #+#    #+#              #
#    Updated: 2022/03/11 18:53:52 by slucas           ###   ########.fr        #
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
		  toupper.c

SRC		= $(addprefix ft_, $(RADICAL))

OBJ		= $(SRC:.c=.o)

CC		= gcc

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I. $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re