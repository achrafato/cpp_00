# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 10:05:36 by aibn-che          #+#    #+#              #
#    Updated: 2024/09/17 16:34:52 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSRCS = ./Contact.cpp ./PhoneBook.cpp ./main.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = Contact.hpp PhoneBook.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = contact

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