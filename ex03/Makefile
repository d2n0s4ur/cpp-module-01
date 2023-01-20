# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 16:10:42 by jnoh              #+#    #+#              #
#    Updated: 2023/01/20 15:47:03 by jnoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= 	c++
CXXFLAGS= 	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	= 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
NAME	=	weapon
OBJS	=	$(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
			$(CXX) -o $(NAME) $(CXXFLAGS) $(OBJS)

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