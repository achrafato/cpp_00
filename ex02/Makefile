# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 11:57:55 by aibn-che          #+#    #+#              #
#    Updated: 2024/09/21 09:37:32 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


MSRCS = ./Account.cpp ./tests.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = Account.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = account

all : $(NAME)

%.o:%.cpp $(HEADER)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)