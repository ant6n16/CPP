# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 12:57:09 by antdelga          #+#    #+#              #
#    Updated: 2024/08/15 12:58:30 by antdelga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FlagTrap
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = g++
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FlagTrap.cpp
OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
