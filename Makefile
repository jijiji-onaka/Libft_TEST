# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 16:58:01 by tjinichi          #+#    #+#              #
#    Updated: 2020/11/06 01:04:46 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFTDIR	=	../libft/

NAME = test
CC = gcc
CFLAGS = -g -I$(LIBFTDIR)

SRCS :=	$(wildcard ./*.c) \
		$(wildcard ./srcs/Bonus_functions/*.c)
		# srcs/Bonus_functions/lstnew_test.c


OBJS = $(SRCS:.c=.o)

LIBS = 	$(LIBFTDIR)/libft.a

all: $(NAME)

$(NAME): $(LIBS) $(OBJS)
	$(CC) $(CFLAGS) -fsanitize=address -o $(NAME) $(OBJS) $(LIBS)

$(LIBS): FORCE
	make bonus -C $(LIBFTDIR)

FORCE:

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re: fclean all

leak:
	ASAN_OPTIONS=detect_leaks=1 ./test

.PHONY: all clean fclean re FORCE
