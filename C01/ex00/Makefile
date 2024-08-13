# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 12:57:09 by antdelga          #+#    #+#              #
#    Updated: 2024/08/11 21:30:47 by antdelga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = g++
SRC = Zombie.cpp randomChump.cpp newZombie.cpp main.cpp
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
