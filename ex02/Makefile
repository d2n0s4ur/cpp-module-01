# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnoh <jnoh@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:49:23 by jnoh              #+#    #+#              #
#    Updated: 2023/01/20 15:47:02 by jnoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= 	c++
CXXFLAGS= 	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	= 	main.cpp
NAME	=	hi
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