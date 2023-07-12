# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <Maurice809@student.42seoul.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 20:47:53 by tmoret            #+#    #+#              #
#    Updated: 2023/04/02 18:51:09 by Maurice809       ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror  -std=c++98
RM			= rm -rf

OBJDIR = .obj

FILES		= main Zombie newZombie randomChump

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Zombie.hpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
