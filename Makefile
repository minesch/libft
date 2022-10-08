# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 12:19:03 by azakarya          #+#    #+#              #
#    Updated: 2022/03/23 12:19:04 by azakarya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC	=	cc

CFLAGS = -Wall -Wextra -Werror

ALL_SRCS = $(wildcard *.c)

BONUS_SRCS = $(wildcard ft_lst*.c)

SRCS = $(filter-out $(BONUS_SRCS), $(ALL_SRCS))

OBJS = $(patsubst %.c, %.o, $(SRCS))

BONUS_OBJS = $(patsubst %.c, %.o, $(BONUS_SRCS))

RM = rm -f

AR = ar rcs

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)


clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus