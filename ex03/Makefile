# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 16:10:42 by jnoh              #+#    #+#              #
#    Updated: 2023/01/17 19:15:59 by jnoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	c++
CPPFLAGS= 	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	= 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
NAME	=	weapon
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