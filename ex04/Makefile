# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:00:54 by jnoh              #+#    #+#              #
#    Updated: 2023/01/12 17:31:14 by jnoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	c++
CPPFLAGS= 	-Wall -Werror -Wextra # -std=c++98
SRCS	= 	main.cpp
NAME	=	replace
OBJS	=	$(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
			$(CC) -o $(NAME) $(CPPFLAGS) $(OBJS)

all	: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS)
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re